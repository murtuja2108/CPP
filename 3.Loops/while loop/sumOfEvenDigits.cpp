#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum=0;
    int lastDigit;
    while(n>0){
        lastDigit=n%10;
        if(lastDigit%2==0){
            sum+=lastDigit;
        }
        n/=10;
    }
    cout<<sum;
}