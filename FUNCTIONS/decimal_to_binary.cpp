#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decimal_to_binary(int n){
    string s="";
    while(n){
        if(n%2)
        s+='1';
        else 
        s+='0';
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    int n;
    cin>>n;
    cout<<decimal_to_binary(n)<<endl;
    return 0;
}

