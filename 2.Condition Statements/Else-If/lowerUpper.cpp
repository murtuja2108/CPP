//lower case & upper case checking
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"Lower case";
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"Upper case";
    }
    else{
        cout<<"Invalid input";
    }
}