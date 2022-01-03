#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int prev=0, curr=1;
    cout<<0<<" ";
    if (num==1) {
        return 0;
    }
    cout<<1<<" ";
    for(int i=3; i<num; i++){
        int temp= curr;
        curr+=prev;
        prev = temp;
        cout<<curr<<" ";
    }
    return 0;
}
