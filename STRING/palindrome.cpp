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
        string s, r;
        cin >> s;
        r = s;
        reverse(s.begin(), s.end());
        if (s == r)
            cout << 1;
        else
            cout << 0;
    }
    return 0;
}