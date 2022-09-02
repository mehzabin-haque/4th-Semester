#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

char pt[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char p1[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i','j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
            'w', 'x', 'y', 'z' };
char ct[]={'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
string p="",c="",r="";

string encryption(string s){
	
	string encrypt = "";
	
	for(int i=0;i<s.length();i++){
		for(int j=0;j<26;j++){
			if(s[i]==pt[j] || s[i]==p1[j]){
				encrypt = encrypt + ct[j];
				break;
			}
		}
	}
	
	return encrypt;
}

string decryption(string s){
		string decrypt = "";
	
	for(int i=0;i<s.length();i++){
		for(int j=0;j<26;j++){
			if(s[i]==ct[j] || s[i]==p1[j]){
				decrypt = decrypt + pt[j];
				break;
			}
			
			if(s[i] == ' '){
				decrypt = decrypt + s[i];
			}
		}
	}
	
	return decrypt;
}

int main(){
	
	cout << "Enter the text : ";
	cin >> p ;
	c = encryption(p);
	cout << "\nEncrypted Text : " << c ;
	r = decryption(c);
	cout << "\nDecrypted Text : " << r;
	return 0;
}
