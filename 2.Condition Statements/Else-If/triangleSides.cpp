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
    if((m+n>o) && (m+o>n) && (n+o>m)){
        cout<<m<<","<<n<<","<<o<<" can be the sides of triangle.";
    }
    else{
        cout<<"Invalid.";
    }
}