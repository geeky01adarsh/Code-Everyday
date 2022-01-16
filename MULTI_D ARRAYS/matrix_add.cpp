#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int arr1[r][c], arr2[r][c], ans[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr1[i][j];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr2[i][j];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j];
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}