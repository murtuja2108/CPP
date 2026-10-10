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
    if(m>n &&m>o){
        cout<<m<<" is largest.";
    }
    else if(n>m && n>o){
        cout<<n<<" is largest.";
    }
    else if(o>m && o>n){
        cout<<o<<" is largest.";
    }else{
        cout<<"both of them are equal.";
    }
}