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
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] < 'z')
                s[i]++;
            if (s[i] == 'z')
                s[i] = 'a';
        }
        cout << s << endl;
    }
    return 0;
}