#include <iostream>
using namespace std;

int main(){
    int divisor, dividend;
    cout<< "Enter the divisor: ";
    cin>>divisor;
    cout<< "Enter the dividend: ";
    cin>>dividend;
    int remainder = dividend%divisor;
    int quotient = dividend/divisor;
    cout << "The quotient is " << quotient << " and the remainder is " << remainder << endl;
    return 0;
}