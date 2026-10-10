#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    // if(n>9 && n<=99){
    //     cout<<"This is a two digit number.";
    //}
    if(n>99 && n<=999){
        cout<<"This is three digit number.";
    }else{
        cout<<"Not a three digit number.";
    }
}