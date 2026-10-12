#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter Number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        if(i%2!=0){
        cout<<"Odd No."<<i<<endl;
        sum+=i;
        i+=2;
        }
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}