#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter upto term: ";
    cin>>n;
    int a,b;
    cout<<"Enter 1st term of fibonacci series: ";
    cin>>a;
    cout<<"Enter 2nd term of fibonacci series: ";
    cin>>b;
    int sum=0;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        cout<<"nest term of Fibonacci series is: "<<sum<<endl;
        a=b;
        b=sum;
    }
}