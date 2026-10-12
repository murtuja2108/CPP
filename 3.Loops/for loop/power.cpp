#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter base: ";
    cin>>a;
    cout<<"Enter exponent: ";
    cin>>b;
    int pow=1;
    for(int i=1;i<=b;i++){
        pow*=a;
    }
    if(a==0 && b==0){
    cout<<a<<" raised to the power "<<b<<" is "<<0;
    }
    else{
    cout<<a<<" raised to the power "<<b<<" is "<<pow;
    }
}