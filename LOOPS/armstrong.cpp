#include <iostream>
using namespace std;

int main(){
    int num, rev=0, temp, cub=0;
    cin>>num;
    temp=num;
    while(num){
        rev= num%10;
        cub += rev*rev*rev;
        num/=10;
    }
    if(cub==temp) cout<<"Armstrong\n";
    else cout<<"Not a armstrong\n";
}