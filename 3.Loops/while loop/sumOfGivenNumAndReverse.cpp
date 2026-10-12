#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int lastDigit;
    int reverse=0;
    int sum;
    sum=n;
    while(n>0){
        lastDigit=n%10;
        reverse*=10;//if we interchange line no 11 and 12 then (reverse *=10) is the lest step so answer will come with one extra zero
        reverse+=lastDigit;
        n/=10;
    }
    cout<<reverse<<endl;
    sum+=reverse;
    cout<<sum;
}