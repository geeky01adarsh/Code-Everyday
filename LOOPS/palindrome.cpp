#include <iostream>
using namespace std;

int main(){
    int num, rev=0, temp;
    cin>>num;
    temp=num;
    while(num){
        rev= rev*10+num%10;
        num/=10;
    }
    if(rev==temp) cout<<"Palindrome\n";
    else cout<<"Not a palindrome\n";
}