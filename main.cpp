#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a binary number : ";
    getline(cin,str);

    int decimal = 0;
    int position = str.length() - 1;

    for(int i=0; i<str.length(); i++){
        decimal += ((str.at(i) - '0') * pow(2,position));
        position--;
    }

    cout<<"Decimal of the given binary is "<<decimal<<endl;


    return 0;
}
