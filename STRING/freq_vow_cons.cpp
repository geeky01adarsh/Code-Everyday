#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    // t=1;
    while (t--)
    {
        string s;
        getline(cin,s);
        int cv=0, cc=0, cw=0;
        
        for(int i=0; i<s.length(); i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') cv++;
            if(s[i]==' ') cw++;
            else cc++;
        }
        cout<<"Consonents "<<cc<<endl;
        cout<<"Vowels "<<cv<<endl;
        cout<<"Whitespace "<<cw<<endl;
    }
    return 0;
}