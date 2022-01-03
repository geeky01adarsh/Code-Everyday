#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;
    
    // finding hcf
    int hcf=1;
    for(int i=2; i<=min(num1,num2); i++){
        if((num1%i==0) && (num2%i==0))
        hcf=i;
    }

    // finding lcm
    //  lcm = (product of no)/hcf

    int lcm = (num1*num2)/hcf;
    cout<<lcm<<endl;
}