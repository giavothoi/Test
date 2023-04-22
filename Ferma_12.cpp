#include<bits/stdc++.h>
#define ll long long
#define MAX 1e9+7
#define MIN -1e9+7
#define f first
#define s second
using namespace std;

/*
	b = a^m mod n
*/


bool kiem_tra_nguyen_to(int n){
	int count = 0;
    for(int i = 2; i*i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int haBac(int a,int m,int n)
{
	int res =1;
	long kq;
	while(1)
	{
		int mu = m/2;
		if(mu==0) break;
		
		if(m%2)
			res = (res*a)%n;
			
		kq = a*a % n;
		m/=2;	
		a = kq;
	}

	return (a*res)%n;
}
int main(){
	//int a = 159,m = 127,n = 31;
	int a,m,n ;
	cout<<"Nhap lan luot a,m,n :";cin>>a>>m>>n;
	
	a = a % n; /// dong du
	if(kiem_tra_nguyen_to(n) && m > n){
		int _m = m;
		if(__gcd(a,n) == 1){ // dang 1
			while(_m > n) _m = _m-(n-1);
			cout<<"\n"<<a<<"^"<<m<<" mod "<<n<<" = "<<haBac(a,_m,n);
		}else{ // dang 2
			while(_m > n) _m = _m - n;
			cout<<"\n"<<a<<"^"<<m<<" mod "<<n<<" = "<<haBac(a,_m,n);
		}
	}else{
		cout<<"\n"<<a<<"^"<<m<<" mod "<<n<<" = "<<haBac(a,m,n);
	}
return 0;
}


