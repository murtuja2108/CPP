#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum+=i;
            i+=2;
        }
    }
    cout<<sum;
}