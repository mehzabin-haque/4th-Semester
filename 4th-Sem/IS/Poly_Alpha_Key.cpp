#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define start_ch '\0'
string k="", s;
ll key;
char table[128][128];

void create_table()
{
    for(ll i=0;i<128;i++)
    {
        for(ll j=0;j<128;j++)
        {  
            table[i][j]=((i+j+key)%128)+start_ch;
            
    }}
    
}

void encryption(string s)
{   
    cout << "Cipher Text: \n";
    
    for(ll i=0; i<s.size(); i++)
    {   
        
        k+= (table[(s[i]-start_ch)][i%128]);
     
    }
    cout << k;
    cout << '\n';
    
}

void decryption()
{       
    
    cout << "Plain Text: \n";
    string tmp="";
    for(ll i=0; i<k.size();i++){
        
        for(ll j=0;j<128;j++)
        {
            if(table[j][i%128]==k[i]) {tmp+= (start_ch+j);}
        }
  
    }
    cout << tmp << '\n';
}

int main()
{   
    cout << "Enter the key: ";
    cin >> key;
    getchar();
    create_table();
    cout <<"Enter text: \n";
    getline(cin, s);
    encryption (s);
    decryption ();       
}
