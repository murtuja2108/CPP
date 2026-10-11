#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    char op;
    cout<<"Enter month number: ";
    cin>>x>>op>>y;
    switch(op){
        case '+':
            cout<<x+y;
            break;
        case '-':
            cout<<x-y;
            break;
        case '*':
            cout<<x*y;
            break;
        case '/':
            cout<<"Quatient: "<<x/y;
            break;
        case '%':
            cout<<"Remainder: "<<x%y;
            break;
        default:
            cout<<"Error";
    }
}