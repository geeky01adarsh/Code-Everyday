#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        string text;
        getline(cin, text);
        cin.ignore();
        for (int x = 0; x < text.length(); x++)
        {
            if (x == 0)
                text[x] = toupper(text[x]);
            else if (text[x - 1] == ' ')
                text[x] = toupper(text[x]);
        }

        cout << text << endl;
    return 0;
}