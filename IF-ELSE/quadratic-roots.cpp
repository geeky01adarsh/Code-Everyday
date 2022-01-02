#include <bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c;
    cout<<"Enter the cofficient for x^2\n";
    cin>>a;
    cout<<"Enter the cofficient for x\n";
    cin>>b;
    cout<<"Enter the cofficient \n";
    cin>>c;
    double determinant = (b*b) - (4*a*c);
    double root1, root2;
    if(determinant==0)
        cout<<b/(-2*a)<<" and "<<b/(-2*a)<<endl;
    else if(determinant>0)
        cout<<(-b+sqrt(determinant))/2*a<<" and "<<(-b-sqrt(determinant))/2*a;
    else 
        cout<<-b/(2*a)<<"-"<<sqrt(-determinant)/2*a<<"i and "<<-b/(2*a)<<"+"<<sqrt(-determinant)/2*a<<"i\n";

}