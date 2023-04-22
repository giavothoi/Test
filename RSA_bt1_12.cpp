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
	int p,q,e,M;
	cout<<"Nhap p: "; cin>>p;
	cout<<"Nhap q: "; cin>>q;
	cout<<"Nhap e: "; cin>>e;
	cout<<"Nhap M: "; cin>>M;
	
	int n = p*q;
	int euler_n = (p-1)*(q-1);
	
	int d = nghichdao(e,euler_n);

	int C = habac(M,d,n);
	int g = habac(C,e,n);
	
	cout<<"PU = {"<<e<<","<<n<<"}\n";
	cout<<"PR = {"<<d<<","<<n<<"}\n";
	cout<<"C = "<<C<<'\n';
	cout<<"M = "<<M;
}




//Cach 2:
//#include<bits/stdc++.h>
//using namespace std;
//int nghichdao(int a,int n)
//{
//	int i=0;
//	while((a*i%n)!=1){
//		i++;
//	}
//	return i;
//}
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
//int habac(int a,int b,int c){
//	int d=bacmax(b);
//	int g=a;
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
//	return g;
//}
//
//int main(){
//	int p,q,e,M;
//	cout<<"Nhap p: "; cin>>p;
//	cout<<"Nhap q: "; cin>>q;
//	cout<<"Nhap e: "; cin>>e;
//	cout<<"Nhap M: "; cin>>M;
//	
//	int n = p*q;
//	int euler_n = (p-1)*(q-1);
//	
//	int d = nghichdao(e,euler_n);
//
////	int C = binhphuong(M,d,n);
//	int C = habac(M,d,n);
//	int g = habac(C,e,n);
//	M = habac(C,e,n);
//	
//	cout<<"PU = {"<<e<<","<<n<<"}\n";
//	cout<<"PR = {"<<d<<","<<n<<"}\n";
//	cout<<"C = "<<C<<'\n';
//	cout<<"M = "<<M;
//}




