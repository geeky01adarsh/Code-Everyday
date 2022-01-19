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
        cin.ignore();
        int count=1;
        for(int i=1; i<s.length()-1; i++){
            if(s[i]==' '){
                if((s[i-1]!=' ') || (s[i+1]!=' '))
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}