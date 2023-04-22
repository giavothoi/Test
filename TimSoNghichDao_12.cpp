#include<iostream>
using namespace std;
int main()
{
	int i,a,n;
	cout<<"Tim so nghich dao a(^-1) mod n !" <<endl;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap n: ";
	cin>>n;
	for(i=1;i<n;i++)
		if((a*i-1)%n==0)
		{
			cout<<i;
			break;
		}
}

