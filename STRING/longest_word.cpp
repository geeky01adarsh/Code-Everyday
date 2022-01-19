#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cin.ignore();
    int st = 0, e = 0, max_len = 1;
    int curr_len = 0, ts = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            curr_len++;
        }
        else
        {
            if (curr_len > max_len)
            {
                st = ts;
                e = i;
                max_len = curr_len;
            }
            ts = i + 1;
            curr_len = 0;
        }
    }
    if (curr_len > max_len)
    {
        st = ts;
        e = s.length();
        max_len = curr_len;
    }
    for (int i = st; i < e; i++)
    {
        cout << s[i];
    }
    return 0;
}