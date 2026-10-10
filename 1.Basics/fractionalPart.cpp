#include<bits/stdc++.h>
using namespace std;
int main(){
    float x;
    cout<<"Enter number: ";
    cin>>x;
    int y=(int)x;
    //float z=(float)y;
    x=x-y;
    cout<<x<<endl;
    //for negative no
    float a;
    cout<<"Enter Negative no: ";
    cin>>a;
    int b=(int)a;
    if(b<0){
        b=b-1;
    }
    cout<<b<<endl;
    a=a-b;
    cout<<a;
}