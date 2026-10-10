#include<bits/stdc++.h>
using namespace std;
int main(){
    float p,t,r,si;
    cout<<"Amount is: ";
    cin>>p;
    cout<<"Time periods: ";
    cin>>t;
    cout<<"Rate of interest: ";
    cin>>r;
    si=(p*t*r)/100;
    cout<<"Interest is : "<<si;
}