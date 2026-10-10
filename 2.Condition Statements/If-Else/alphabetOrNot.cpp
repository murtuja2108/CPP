#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter input: ";
    cin>>ch;
    //cout<<ch<<endl<<(int)ch;
    /*if((int)ch>=97 &&(int)ch<=122 || (int)ch>=65 && (int)ch<=90 ){
        cout<<"The character is alphabet";
    }*/
    if((int)ch>=97&&(int)ch<=122){
        cout<<"The character is lowercase alphabet.";
    }
    else if((int)ch>=65&&(int)ch<=90){
        cout<<"The character is uppercase alphabet.";
    }else{
        cout<<"The character is not alphabet.";
    }
}