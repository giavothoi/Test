//Cach1 : SAI
//test
#include<bits/stdc++.h>
using namespace std;
/*
	Input : WHENINROMEDOASTHER
	Key : 4
*/
int main(){
	int key;
	string plain_text;
	cout<<"Nhap chuoi muon ma hoa : ";cin>>plain_text;
	cout<<"\nNhap key : ";cin>>key;
	
	int col = ceil(plain_text.size()*1.0/key);
	char keyT[key][col] = {};
	
	int pos = 0;
	for(int i=0;i<col;i++){
		for(int j=0;j<key;j++){
			if(pos < plain_text.size()){
				keyT[j][i] = plain_text[pos];
				pos++;	
			}
		}
	}
	
	cout<<"Cipher text : ";
	for(int i=0;i<key;i++){
		for(int j=0;j<col;j++){
			cout<<keyT[i][j];
		}
	}
	
return 0;
}



//Cach2 : SAI

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string m;int k;
//	cout<<"Nhap input: "; cin>>m;
//	cout<<"Nhap key: "; cin>>k;
//	char arr[k+5][k+5] ={'X'};
//	int kt=0,r;
//	for(int i=0;;i++)
//	{
//		for(int j=0;j<k;j++)
//		{	
//			if(k*i+j <= m.size()){
//				arr[i][j] = m[k*i+j];
//			}
//			else{
//				r=i;
//				kt=1;
//				break;
//			}
//		}
//		if(kt) break;
//	}
//	r--;
//	for(int j=0;j<k;j++)
//	{
//		for(int i=0;i<=r;i++) cout<<arr[i][j];
//	}
//
//	
//}




//Cach3 : SAI

//#include<bits/stdc++.h>
//#define ll long long
//#define MAX 1e9+7
//#define MIN -1e9+7
//#define f first
//#define s second
//using namespace std;
//string PermutationEncyption(string input, int key){
//	string output="";
//	int i = 0 , j = 0, len_out = 0, len_in = input.length();
//	while(i<key){ 
//		j = i; 
//		while(j < len_in){
//			output += input[j];
//			j+=key;
//		}
//		i++;
//	}
//	return output;
//}
//string PermutationDecyption(string input, int key){
//	string output="";
//	int i = 0 , j = 0, len_out = 0, len_in = input.length();
//	int col = len_in/key;
//	if(len_in%key) col++;
//	while(i<col){
//		j = i; 
//		while(j < len_in){
//			output += input[j];
//			j+=col;
//		}
//		i++;
//	}
//	return output;
//}
//int main()
//{
//	string input="WHENINROMEDOASTHER";
//	int key=4;
//	//freopen("hoanvi.txt", "r", stdin);	//;cout<<"Input: ";cout<<"Key: "; 
//	
////	cin>>input; 
////	cin>>key;
//	 cout<<"input: "<<input<<"\nkey: "<<key<<endl;
//	input = PermutationEncyption(input, key);
//	cout<<"\nPermutation Encyption: "<<input<<endl;
//	cout<<"Permutation Decyption: "<<PermutationDecyption(input, key);
//}


