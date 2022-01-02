#include <bits/stdc++.h>

using namespace std;

int main(){
    int num1, num2, num3;
    cin>>num1>>num2>>num3;

    // function method
    // cout<<max(num1, max(num2, num3));

    // using conditional operators
    if( num1>num2 && num1>num3) cout<<num1<<endl;
    else if(num2>num1 && num2>num3) cout<<num2<<endl;
    else cout<<num3<<endl;

    return 0;
}