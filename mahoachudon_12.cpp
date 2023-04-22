#include<bits/stdc++.h>
using namespace std;
string arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string mahaochudon(string s, string ci){
	string t = "";
	for(int i =0;i<s.length();i++){
		for(int j =0;j<=25;j++){
			if(s[i] == arr[j]){
				t+=ci[j];
			}
			
		}
		
	}
	return t;
}

int main(){
	string plaintext, cipher;
	cout<<"Nhap plaintext: ";cin>>plaintext;
	cout<<"Nhap khoa K: "; cin>>cipher;
	cout<<mahaochudon(plaintext,cipher);
}

//Input: M = LIKEFATHERLIKESO
//Key: K = LYFGMKNERXJPQIVATOHSZDBUCW
//Output: PRJMKLSEMOPRJMHV



////Cach 2:
//#include<bits/stdc++.h>
//using namespace std;
//string arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//string chuDon(string s,string k)
//{
//	string res = "";
//	for(auto i:s)
//	{
//		res+=k[(i-'A')];
//	}
//	return res;
//}
//int vt(char x,string k)
//{
//	for(int i=0;i<k.size();i++)
//	{
//		if(x==k[i]) return i;
//	}
//	
//}
//string deChuDon(string s,string k)
//{
//	string res="";
//	for(auto i:s)
//	{
//		res += arr[vt(i,k)];
//	}
//	return res;
//}
//int main(){
//	string s,k;
//	s="LIKEFATHERLIKESO";
//	k="LYFGMKNERXJPQIVATOHSZDBUCW";
////	cout<<"Nhap input: ";cin>>s;
////	cout<<"Nhap Key: "; cin>>k;
//	string nho = chuDon(s,k);
//	cout<<"Ket qua ma hoa chu don: "<<nho<<'\n';
//cout<<"Ket qua cua tham ma chu don :"<<deChuDon(nho,k);
//}
//





//Cach 3:

//#include<bits/stdc++.h>
//using namespace std;
//
//string encoder(string key)
//{
//    string encoded = "";
//	
//	// danh dau
//    bool arr[26] = {0};
// 
//    for (int i=0; i<key.size(); i++)
//    {
//        if(key[i] >= 'A' && key[i] <= 'Z')
//        {
//            if (arr[key[i]-65] == 0)
//            {
//                encoded += key[i];
//                arr[key[i]-65] = 1;
//            }
//        }
//    }
//    // This loop inserts the remaining
//    // characters in the encoded string.
//    for (int i=0; i<26; i++)
//    {
//        if(arr[i] == 0)
//        {
//            arr[i]=1;
//            encoded += char(i + 65);
//        }
//    }
//    
//    return encoded;
//}
//
//// Function that generates encodes(cipher) the message
//string cipheredIt(string plain_text, string key_encode)
//{
//    string output="";
// 
//    // This loop outputed the message.
//    // Spaces, special characters and numbers remain same.
//    for (int i=0; i<plain_text.size(); i++)
//    {
//        if (plain_text[i] >='A' && plain_text[i] <='Z')
//        {
//            int pos = plain_text[i] - 65;
//            output += key_encode[pos];
//        }
//        else
//        {
//            output += plain_text[i];
//        }
//    }
//    return output;
//}
///*
//	Input = ONESWALLOWDOESNT
//	Key :  WBXGIHOVSYMFUAKZJNCPQLTRED
//
//*/
//int main(){
//	string key,plain_text;
//	cout<<"Nhap chuoi muon ma hoa : ";cin>>plain_text;
//	cout<<"\nNhap key : ";cin>>key;
//	
//	// conver to upper
//	std::transform(key.begin(), key.end(),key.begin(), ::toupper);
//	std::transform(plain_text.begin(), plain_text.end(),plain_text.begin(), ::toupper);
//	
//	string keyEncoded = encoder(key);
//	
//	string cipher_text = cipheredIt(plain_text,keyEncoded);
//	
//	cout<<"Key encoded : "<<keyEncoded<<endl;
//	cout<<"Cipher text : "<<cipher_text;
//
//return 0;
//}

