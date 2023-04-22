#include<iostream>
using namespace std;
int main()
{
	int n, a;
	int q=1, i=0, z, tga ;
	cout<<"Euclide mo rong-nang cao tinh a(^-1) mod n !" <<endl;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap n: ";
	cin>>n;
	z=n;
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
	cout<< q ;
}

