#include <iostream>
using namespace std;

int binary_to_decimal(int n){
    int ans = 0, i=1;
    while(n){
        ans += n%10 * i;
        i*=2;
        n/=10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<binary_to_decimal(n)<<endl;
    return 0;
}