#include<bits/stdc++.h>
using namespace std;
string arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string chuDon(string s,string k)
{
	string res = "";
	for(auto i:s)
	{
		res+=k[(i-'A')];
	}
	return res;
}


int main(){
	string s,k;
	s="LIKEFATHERLIKESO";
	k="LYFGMKNERXJPQIVATOHSZDBUCW";
//	cout<<"Nhap input: ";cin>>s;
//	cout<<"Nhap Key: "; cin>>k;
	string nho = chuDon(s,k);
	cout<<"Ket qua ma hoa chu don: "<<nho<<'\n';

	
}


