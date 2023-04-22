#include<bits/stdc++.h>
using namespace std;
int nghichdao(int a,int n)
{
	int z=n, i=0, tga, q=1;
	while(a!=1)
	{
		i++;
		tga= a;//29
		a= n%a;//10
		n=tga ; //29
		q= (z-q*a) / n ;
	}
	if(i%2==1) 
		q=z-q;
	return q;

}
int habac(int a,int m,int n)
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
	int q,a,xa;
	cout<<"Nhap q: "; cin>>q;
	cout<<"Nhap a: "; cin>>a;
	cout<<"Nhap xa: "; cin>>xa;
	
	int ya = habac(a,xa,q);
	
	int k,M;
	cout<<"Nhap k: "; cin>>k;
	cout<<"Nhap M: "; cin>>M;
	int K = habac(ya,k,q);
	int c1 = habac(a,k,q);
	int c2 = (K*M)%q;
	
	// giai ma
	int K_ = habac(c1,xa,q);
	int M_ = ((c2%q)*(nghichdao(K_,q)))%q;
	
	cout<<"PU = {"<<q<<","<<a<<","<<ya<<"}\n";
	cout<<"(C1,C2) = ("<<c1<<","<<c2<<")\n";
	cout<<"M_ = "<<M_;
	
	
}


