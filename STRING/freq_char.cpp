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
        char ch;
        cin>>ch;
        cin>>s;
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==ch) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}