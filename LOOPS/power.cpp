#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int b,e;
    cin>>b>>e;
    int ans = 1;
    cout<<pow(b,e)<<endl;
    for(int i=0; i<e; i++)
    ans*=b;
    cout<<ans;
}