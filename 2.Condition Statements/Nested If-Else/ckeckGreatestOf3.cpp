#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,o;
    cout<<"Enter a number: ";
    cin>>m;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter a number: ";
    cin>>o;
    if(m>n){
        if(m>o){
            cout<<m<<" is largest.";
        }
        else{
            cout<<o<<" is greatest";
        }
    }
    /*
    else{
        if(n>o){
            cout<<n<<" is greatest.";
        }
        else{
            cout<<o<<" is greatest.";
        }
    }
    */
    else if(n>m){
        if(n>o){
            cout<<n<<" is greatest.";
        }
        else{
            cout<<o<<" is greatest.";
        }
    }
    else if(o>m){
        if(o>n){
            cout<<o<<" is greatest.";
        }
        else{
            cout<<n<<" is greatest.";
        }
    }
    else{
        cout<<m<<" "<<n<<" "<<o<<" both are equal.";
    }
}