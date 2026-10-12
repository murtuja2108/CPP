#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int lastDigit;
    int reverse=0;
    while(n>0){
        lastDigit=n%10;
        reverse*=10;//if we interchange line no 11 and 12 then (reverse *=10) is the lest step so answer will come with one extra zero
        reverse+=lastDigit;
        n/=10;
    }
    cout<<reverse;
}