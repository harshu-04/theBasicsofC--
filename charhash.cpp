#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //precompute
    int hash[26]={0};
     for(int i=0;i<s.size();i++)
        hash[s[i]-'a']++;
    
    //fetch
    int q;
    cin>>q;
    while(q--) 
    {
        char c;
        cin>>c;
        cout<< hash[c-'a']<<endl;
        }
        return 0;
     }
