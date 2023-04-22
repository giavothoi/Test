//chua chuan


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
	int p,q,h,xA,k,HM;
	cout<<"Nhap H(M): "; cin>>HM;
	cout<<"Nhap p: "; cin>>p;
	cout<<"Nhap q: "; cin>>q;
	cout<<"Nhap h: "; cin>>h;
	cout<<"Nhap xA: "; cin>>xA;
	cout<<"Nhap k: "; cin>>k;
	
	int g = habac(h,(p-1)/q,p);
	
	int y = habac(g,xA,p);
	
	int r = habac(g,k,p) % q ;
	
	int s = (nghichdao(k,q)*((HM+xA*r)%q))%q;
	
	int w = nghichdao(s,q);
	
	int u1 = (HM*w)%q;
	int u2 = (r*w)%q;
	
	int v = ( (habac(g,u1,p)*habac(y,u2,p)) %p ) % q;
	
	cout<<"gia tri v = "<<v<<'\n';
	cout<<"gia tri r = "<<r<<'\n';
	
}


