#include<bits/stdc++.h>
using namespace std;
string arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string autokey(string s,string key){
	string t = "";
	string k = "";
	k = key;
	int j=0;
	for(int i =0;i<s.length()-key.length();i++){		
		k += s[i];
	}
	for(int i=0;i<s.length();i++){
		int p = s[i]-'A';
		int q = k[i]-'A';
		int c = (p+q)%26;
		t += arr[c];
	}	
	return t;
}

string lapkhoa(string s,string key){
	string t = "";
	string k = "";
	k = key;
	int j=0;

	for(int i =key.length();i<s.length();i++){		
		k += key[j];
		j++;
		if(j>=key.length()){
			j=0;
		}
	}
	for(int i=0;i<s.length();i++){
		int p = s[i]-'A';
		int q = k[i]-'A';
		int c = (p+q)%26;
		t += arr[c];
	}	
	return t;
}

int main(){
	string k;
	string plt;
	cout<<"Nhap ban ro M: "; cin>>plt;
	cout<<"Nhap khoa K: "; cin>>k;
	
	cout<<"Ma hoa Vigenere-Lap Khoa: "<<lapkhoa(plt,k)<<endl;
	cout<<"Ma hoa Vigenere-AutoKey: "<<autokey(plt,k)<<endl;	
}


//Nhap input: HONESTYISTHEBE
//Nhap key: ABADBE
//Output: 
//HPNHTXYJSWIIBF
//HPNHTXFWFXZXZM 



//Cach 2: autokey

//#include<bits/stdc++.h>
//using namespace std;
//string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//string arr[30][30];
//int main(){
//	string m,k;
//	cout<<"Nhap input: "; cin>>m;
//	cout<<"Nhap key: "; cin>>k;
//	for(int i=0;i<26;i++)
//	{
//		for(int j=0;j<26;j++)
//		{
//			arr[i][j] = s[(j+i)%26];	
//		}
//	}
//	int x=0;
//	while(k.size() < m.size())
//	{
//		k+=m[x];
//		x++;
//	}
//	string result = "";
//	for(int i=0;i<m.size();i++)
//	{
//		result += arr[k[i]-'A'][m[i]-'A'];
//	}
//	cout<<k<<'\n';
//	cout<<"Ket qua cua vignere-key: "<<result;
//}




//Cach 2 : LapKhoa

//#include<bits/stdc++.h>
//#define ll long long
//#define MAX 1e9+7
//#define MIN -1e9+7
//#define f first
//#define s second
//using namespace std;
//string alphabet = "abcdefghijklmnopqrstuvwxyz";
//string RepeatKey(string input, string key){
//	string keyNew=key; 
//	int length = input.length();
//	while(keyNew.length() < length){
//		for(int j = 0 ; j < key.length(); j++){		
//			keyNew+=key[j];
//			if(keyNew.length() == length) break;
//		}
//	} 
//	return keyNew; 
//} 
//int position(char c){
//	if(c > 'Z') return c-'a';
//	return c-'A';
//} 
//string VigenereEncryption(string input, string key){
//	string cipher="";
//	int p, k, c, m = key.length();
//	for(int i=0; i<input.length(); i++){
//		p =  position(input[i]);
//		k = position(key[i%m]);
//		c = (p+k)%26;
//		cipher += alphabet[c];
//	} 
//	return cipher;
//}
//string VigenereDecryption(string input, string key){
//	string cipher="";
//	int p, k, c, m = key.length();
//	for(int i=0; i<input.length(); i++){
//		c =  position(input[i]);
//		k = position(key[i%m]);
//		p = (c - k + 26)%26;
//		cipher += alphabet[p];
//	} 
//	return cipher;
//}
//
//int main()
//{
//	string input, k, key;
//	int length;
//	
//	//freopen("vigenere.txt", "r", stdin);	
//	cout<<"Nhap Input: ";	
//	cin>>input;
//	cout<<"Nhap Key: "; 
//	cin>>key;
//	cout<<"input: "<<input<<"\nkey: "<<key<<endl;
//	key = RepeatKey(input, key);
//	cout<<"Key new: "<<key<<endl;
//	input = VigenereEncryption(input, key);
//	cout<<"Vigenere Encryption: "<<input<<endl;
//	cout<<"Vigenere Decryption: "<<VigenereDecryption(input, key);
//}





//Cach 3: autokey

////En va De
//#include<bits/stdc++.h>
//#define ll long long
//#define MAX 1e9+7
//#define MIN -1e9+7
//#define f firsts
//#define s second
//using namespace std;
//string alphabet = "abcdefghijklmnopqrstuvwxyz";
//string RepeatKey(string input, string key){
//	string keyNew=key; 
//	int length = input.length();
//	while(keyNew.length() < length){
//		for(int j = 0 ; j < input.length(); j++){		
//			keyNew+=input[j];
//			if(keyNew.length() == length) break;
//		}
//	} 
//	return keyNew; 
//} 
//int position(char c){
//	if(c > 'Z') return c-'a';
//	return c-'A';
//} 
//string Vigenere_AutoKeyEncryption(string input, string key){
//	string cipher="";
//	int p, k, c;
//	for(int i=0; i<input.length(); i++){
//		p =  position(input[i]);
//		k = position(key[i]);
//		c = (p+k)%26;
//		cipher += alphabet[c];
//	} 
//	return cipher;
//}
//string Vigenere_AutoKeyDecryption(string input, string key){
//	string cipher="";
//	int p, k, c;
//	for(int i=0; i<input.length(); i++){
//		c =  position(input[i]);
//		k = position(key[i]);
//		p = (c - k + 26)%26;
//		cipher += alphabet[p];
//		key += alphabet[p];
//	} 
//	return cipher;
//}
//
//int main()
//{
//	string input, k, key;
//	int length;
//	//freopen("autokey.txt", "r", stdin);	
//	cout<<"Nhap Input: ";	
//	cin>>input;
//	cout<<"Nhap Key: "; 
//	cin>>key;
//	cout<<"input: "<<input<<"\nkey: "<<key<<endl;
//	
//	key = RepeatKey(input, key);
//	cout<<"Key new: "<<key<<endl;
//	input = Vigenere_AutoKeyEncryption(input, key);
//	cout<<"Vigenere Encryption: "<<input<<endl;
//	cout<<"Vigenere Decryption: "<<Vigenere_AutoKeyDecryption(input, key);
//}






//Cach3 : Lap Khoa
// #include<bits/stdc++.h>
//#include <algorithm>
//using namespace std;
///*
//	Input : BETTERSAFETH
//	KEY :  ITSASM
//*/
//int main(){
//	string key,plain_text;
//	cout<<"Nhap chuoi muon ma hoa : ";cin>>plain_text;
//	cout<<"\nNhap key : ";cin>>key;
//	
//	
//	int psize = plain_text.size();
//	int ksize = key.size();
//
//	while(psize > ksize){
//		key+=key;
//		ksize+=ksize;
//	};
//	
//	key = key.substr(0,psize);
//	
//	
//	std::transform(key.begin(), key.end(),key.begin(), ::toupper);
//	std::transform(plain_text.begin(), plain_text.end(),plain_text.begin(), ::toupper);
//
//	
//	string output = "";
//	
//	for(int i=0;i<plain_text.size();i++){
//		if(plain_text[i] >= 'A' && plain_text[i] <= 'Z'){
//			output+= ((plain_text[i] - 'A') + (key[i] - 'A'))%26 + 'A';
//		}
//	}
//	
//	cout<<"\nCipher text:"<<output;
//return 0;
//}





////cach 4: Lap Khoa
//#include<bits/stdc++.h>
//using namespace std;
//string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//string arr[30][30];
//int main(){
//	string m,k;
//	cout<<"Nhap input: "; cin>>m;
//	cout<<"Nhap key: "; cin>>k;
//	for(int i=0;i<26;i++)
//	{
//		for(int j=0;j<26;j++)
//		{
//			arr[i][j] = s[(j+i)%26];	
//		}
//	}
//	
//	string nho = k;
//	int x=0;
//	while(k.size() < m.size())
//	{
//		k+=nho[x];
//		x++;
//	}
//	string result = "";
//	for(int i=0;i<m.size();i++)
//	{
//		result += arr[k[i]-'A'][m[i]-'A'];
//	}
//	cout<<k<<'\n';
//	cout<<"Ket qua cua vignere-key: "<<result;
//}




