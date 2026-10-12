#include<bits/stdc++.h>
using namespace std;
int main(){
    //4,7,10,13,16
    int x;
    cout<<"Enter number: ";
    cin>>x;
    int a;
    cout<<"First number: ";
    cin>>a;
    int d;
    cout<<"Difference: ";
    cin>>d;
    int i=1;
    while(i<=x){
        cout<<a<<endl;
        a*=d;
        i++;
    }
}