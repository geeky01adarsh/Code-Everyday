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
        cin>>s;
        // getline(cin, s);
        // cin.ignore();
        string res = "";
        // cout<<s<<endl;
        for (int i = 0; i < s.length(); i++)
        {
            if (int(s[i]) >= 97 && int(s[i]) <= 122)
                res += s[i];
            if (int(s[i]) >= 65 && int(s[i]) <= 90)
                res += s[i];
        }
        cout << res << endl;
    }
    return 0;
}