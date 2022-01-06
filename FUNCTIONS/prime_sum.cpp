#include <iostream>
using namespace std;

void prime(int num, bool arr[]){
    for(int i=2; i<=num; i++){
        if(!arr[i])
        {
            // cout<<i<<" ";
            for(int j =i*i; j<=num; j+=i)
            arr[j]=1;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    bool arr[n+1];
    arr[0]=1;
    prime(n, arr);
    for(int i=0; i<=n/2; i++){
        if(!arr[i] && !arr[n-i])
        cout<<i<<" + "<<n-i<<endl;
    }
    return 0;
}
