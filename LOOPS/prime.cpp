#include <iostream>
using namespace std;

int main(){
    int num, rev=0;
    cin>>num;
    if(num==1){ cout<<"Non-prime"; return 0;}
    for(int i=2; i<num; i++){
        if(num%i==0){
            cout<<"Non-prime";
            return 0;
        }
    }
    cout<<"Prime";
}