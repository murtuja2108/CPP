#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,i,n;
    cout<<"Enter table number: ";
    cin>>x;
    n=x*10;
    for(i=x;i<=n;i+=x){
        cout<<i<<endl;
    }
}