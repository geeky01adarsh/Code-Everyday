#include <iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if( ch =='A' || ch=='a' || ch == 'E' || ch =='e')
    cout<<"VOWEL\n";
    else if(ch == 'I' || ch =='i')
    cout<<"VOWEL\n";
    else if (ch=='o' || ch=='O' || ch=='u' || ch=='U')
    cout<<"VOWEL\n";
    else cout<<"CONSONENT\n";
}