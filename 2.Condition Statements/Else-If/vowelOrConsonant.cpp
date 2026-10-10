#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter input: ";
    cin>>ch;
    //cout<<ch<<endl<<(int)ch;
    if((int)ch>=97 &&(int)ch<=122){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"The character is Lowercase Vowel.";
        }
        else{
            cout<<"The character is Lowercase Consonant.";
        }
    }
    else if((int)ch>=65 && (int)ch<=90){
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<"The character is Uppercase Vowel.";
        }
        else{
            cout<<"The character is Uppercase Consonant.";
        }
    }
    else{
        cout<<"This is not character.";
    }
    
}