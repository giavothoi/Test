//INPUT: SOFARSOGOODSO
//KEY: EASTORW
//OUT: TE  GE BE AK SZ DK TE 

//Cach 1: Dung nhung thua

#include<bits/stdc++.h>
#define ll long long
#define MAX 1e9+7
#define MIN -1e9+7
#define f first
#define s second
using namespace std;
string Arrkey = "";
map<char, int>M;
string CreateArrKey(string key){
	int x=0, y=0;
	for(auto i:key){
		if(!M[i]){
			Arrkey+=i;
			if(i=='J' || i == 'I') M['I'] = M['J'] = 1; 
			M[i] = 1;
		}
	}
	for(char i = 'A'; i<='Z'; i++){
		if(!M[i]){
			Arrkey+=i;
			if(i=='J' || i == 'I') M['I'] = M['J'] = 1; 
			M[i] = 1;
		}
	}
	for(int i=0; i<Arrkey.length(); i++)
		M[Arrkey[i]] = i;
		return Arrkey;
}
string SplitLetters(string input){
	string s= "";
	s+= input[0]; 
	for(int i=1; i<input.length(); i++){
		if(input[i] == input[i-1]) {
			s+='X';
		}
		s+=input[i];
	}
	if(input.length()%2) s+='X';
	return s;
}

string PlayFairEncyption(string input, string key){
	string output="";
	for(int i=0; i<input.length(); i+=2){
		int p1 = M[input[i]], p2 = M[input[i+1]];
		int row1 = p1/5, col1 = p1%5;
		int row2 = p2/5, col2 = p2%5;
		if(row1 == row2){
			col1 = ++col1%5;
			col2 = ++col2%5;
			output+= Arrkey[row1*5+col1];
			output+= Arrkey[row2*5+col2];
		}
		else if(col1 == col2){
			row1 = ++row1%5;
			row2 = ++row2%5;
			output+= Arrkey[row1*5+col1];
			output+= Arrkey[row2*5+col2];
		}
		else {
			output+=  Arrkey[row1*5+col2];
			output+= Arrkey[row2*5+col1];
		}
		
	}
	return output;
}
string PlayFairDecyption(string input, string key){
	string output="";
	for(int i=0; i<input.length(); i+=2){
		int p1 = M[input[i]], p2 = M[input[i+1]];
		int row1 = p1/5, col1 = p1%5;
		int row2 = p2/5, col2 = p2%5;
		if(row1 == row2){
			col1 = ++col1%5;
			col2 = ++col2%5;
			output+= Arrkey[row1*5+col1];
			output+= Arrkey[row2*5+col2];
		}
		else if(col1 == col2){
			row1 = ++row1%5;
			row2 = ++row2%5;
			output+= Arrkey[row1*5+col1];
			output+= Arrkey[row2*5+col2];
		}
		else {
			output+=  Arrkey[row1*5+col2];
			output+= Arrkey[row2*5+col1];
		}
		
	}
	return output;
}
int main()
{
	string input, key;
	cout<<"Input: ";
	cin>>input;
	cout<<"Key: "; 
	cin>>key;
	//freopen("playfair.txt", "r", stdin);
	 
	
	cout<<"input: "<<input<<"\nkey: "<<key<<endl;
	key = CreateArrKey(key); 
	cout<<"\nCreate ArrKey: "<<key<<endl; 
	input = SplitLetters(input);
	input = PlayFairEncyption(input,key);
	cout<<"\nPlayFair Encyption: "<<input<<"\n";
	cout<<"\nPlayFair Decyption: "<<PlayFairDecyption(input, key); 
	 
}





//
////Cach2: Tinh ca I lan J vao bang
//#include<bits/stdc++.h>
//using namespace std;
//string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//int a[26]={0};
//char arr[10][10];
//string split(string input)
//{
//	string result = "";
//	int i=0;
//	while(i<input.size())
//	{
//		if(input[i]==input[i+1])
//		{
//			result += input[i];
//			result += 'X';
//			i++;
//		}
//		else{
//			result += input[i];
//			if(i+1 < input.size()) result += input[i+1];
//			i+=2;
//		}
//	}
//	if(result.size()%2) result+='X';
//	return result;
//}
//void vt(char x,int &row,int &col)
//{
//	for(int i=0;i<5;i++)
//	{
//		for(int j=0;j<5;j++)
//		{
//			if(arr[i][j]==x){
//				row = i;
//				col = j;
//				return ;
//			} 
//		}
//	}
//}
//
//int main(){
//	string m,k;
//	cout<<"Nhap input: "; cin>>m;
//	cout<<"Nhap key: "; cin>>k;
//	map<char,int> mp;
//	string knew="";
//	for(auto i:k){
//		mp[i]++;
//		if(mp[i]==1)
//		{
//			knew += i;
//			a[i-'A']=1;
//		}
//	}
//	
//	if(a[8]==1) a[9]=1;
//	if(a[9]==1) a[8]=1;
//	
//	int l=0,h=0;
//	for(int i=0;i<5;i++)
//	{
//		for(int j=0;j<5;j++)
//		{
//			if(l < knew.size())
//			{
//				arr[i][j] = knew[l];
//				l++;
//			}
//			else{
//				while(h<26)
//				{
//					if(a[h]==0) break;
//					h++;
//				} 
//				arr[i][j] = s[h];
//				h++;
//			}
//		}
//	}
//
//	string mNew = split(m);
//	string kq="";
//	
//	for(int i=0;i<mNew.size()-1;i+=2)
//	{
//		int x1,y1,x2,y2;
//		vt(mNew[i],x1,y1);
//		vt(mNew[i+1],x2,y2);
//		if(x1==x2){
//			kq+=arr[x1][(y1+1)%5];
//			kq+=arr[x1][(y2+1)%5];
//		}
//		else if(y1==y2)
//		{
//			kq+=arr[(x1+1)%5][y1];
//			kq+=arr[(x2+1)%5][y1];
//		}
//		else{
//			kq+=arr[x1][y2];
//			kq+=arr[x2][y1];
//		}
//	}
//	cout<<mNew<<'\n';
//	cout<<kq;
//	
//}

