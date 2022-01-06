#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    bool arr[num+1];
    for(int i=2; i<=num; i++){
        if(!arr[i])
        {
            cout<<i<<" ";
            for(int j =i*i; j<=num; j*=i)
            arr[j]=1;
        }
    }
    return 0;
}
