#include<bits/stdc++.h>
using namespace std;
int main(){
	long a,m,n;
	cout<<"Nhap a:"; cin>>a;
	cout<<"Nhap m:"; cin>>m;
	cout<<"Nhap n:"; cin>>n;
	int res =1;
	long kq;
	while(1)
	{
		int mu = m/2;
		if(mu==0) break;
		
		if(m%2) // neu m le
			res = (res*a)%n;
		 
		kq = a*a % n;
		m/=2;		
		a = kq;
	}

	cout<<(a*res)%n;
}



////Cach 2:

//#include<bits/stdc++.h>
//using namespace std;
//
//int bacmax(int a){
//	int i=2,j=0;
//	while(i<=a){
//		i*=2;
//		j++;	
//	}
//	return j;
//}
//
//int main(){
//	int a,b,c,g;
//	cin>>a>>b>>c;//a^b mod c
//	int d=bacmax(b);
//	g=a;
//	int e[100];
//	for(int i=1;i<=d;i++){
//		int j = pow(a,2);
//		e[i]=j%c;
//		a=e[i];
//	}
//	int f[100];
//	for(int i =d;i>=0;i--){
//		if(pow(2,i)<=b){
//			b-=pow(2,i);
//			f[i]=pow(2,i);
//		}else{
//			f[i]=0;
//		}		
//	}
//	if(f[0]==0){
//		g=1;
//	}
//	for(int i=1;i<=d;i++){
//		if(f[i]!=0){
//			g*=e[i];
//			g=g%c;
//		}
//	}
//	cout<<g;	
//}



////Cach3: chua dung hoan toan

//#include<bits/stdc++.h>
//using namespace std;
//
///*
//	b = a^m mod n
//*/
//
//int habacluythua(int a,int m,int n){
//	if(m == 1) return a%n;  // lam den khi nao mux =1
//	int c = m/2;
//	int d = m%2;
//	int v = int( pow(habacluythua(a,c,n),2) * int(pow(a,d)) ) % n; // de quy lien tuc bang cach tinh 1/2 so mu
//	return v;
//}
//
//int main(){
//	int a,m,n;
//	cout<<"Nhap lan luot a,m,n :";cin>>a>>m>>n;
//	cout<<"\n"<<a<<"^"<<m<<" mod "<<n<<" = "<<habacluythua(a,m,n);
//	
//
//
//return 0;
//}


////Cach4: Chua dung hoan toan
//#include<bits/stdc++.h>
//#define ll long long
//#define MAX 1e9+7
//#define MIN -1e9+7
//#define f first
//#define s second
//using namespace std;
//
///*
//	b = a^m mod n
//*/
//
//int haBac(int a,int m,int n){
//	if(m == 1) return a%n;
//	int c = m/2;
//	int d = m%2;
//	int v = int(pow(haBac(a,c,n),2) * int(pow(a,d))) % n;
//	return v;
//}
//
//int main(){
//	int a,m,n;
//	cout<<"----------------------b = a^m mod n----------------------"<<endl;
//	cout<<"Nhap lan luot a,m,n :";cin>>a>>m>>n;
//	a = a % n;
//	cout<<"\n=> "<<a<<"^"<<m<<" mod "<<n<<" = "<<haBac(a,m,n);
//	
//
//
//return 0;
//}


