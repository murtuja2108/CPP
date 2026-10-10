//Upper ad Lower case chakcking using Implicit COnversion(TypeCasting)
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Character:";
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<"Lower case";
    }
    else if(ch>=65 && ch<=90){
        cout<<"Upper case";
    }
    else{
        cout<<"Invalid input";
    }
}