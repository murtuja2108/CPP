#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Input: ";
    cin>>ch;
    if(((int)ch>=65 && (int)ch<=90) || ((int)ch>=97 && (int)ch<=122 )){
        cout<<"This is a Alphabet.";
    }
    else if((int)ch>=30 && (int)ch>=39){
        cout<<"This is Digit.";
    }
    else{
        cout<<"This is special character";
    }
}