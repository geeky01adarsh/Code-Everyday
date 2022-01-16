#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    float arr[n];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    float average = sum / n;
    float sq_div_diff = 0;
    for(int i=0; i<n; i++){
        sq_div_diff += (abs(arr[i]-average)*abs(arr[i]-average));
    }
    sq_div_diff /= n;
    cout<<"The standard deviation is "<< sqrt(sq_div_diff)<<endl;
    return 0;
}