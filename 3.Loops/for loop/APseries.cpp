#include<bits/stdc++.h>
using namespace std;
int main(){
    //4,7,10,13,16
    int x;
    cout<<"Enter term number: ";
    cin>>x;
    int a;
    cout<<"First number: ";
    cin>>a;
    int d;
    cout<<"Difference: ";
    cin>>d;    
    for(int i=1;i<=x;i++){
        cout<<a<<endl;
        a+=d;
    }
}