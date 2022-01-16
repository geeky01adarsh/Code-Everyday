#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi = max(arr[i], maxi);
    }
    cout << "The largest no is " << maxi << endl;
    return 0;
}