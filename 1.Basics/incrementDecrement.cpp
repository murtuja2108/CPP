#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    /*
    cout<<("the value of a : %d",a++)<<endl;
    cout<<("a : %d",++a)<<"\n";
    cout<<("b : %d",b--)<<"\n";
    cout<<("b : %d",--b)<<endl;
    cout<<("%d",a)<<"\n";
    cout<<("%d",b);*/
    cout<<"The value of post increment a : "<<a++<<endl;
    cout<<"The value of pre increment a : "<<++a<<endl;
    cout<<"the value of pre decrement b : "<<b--<<endl;
    cout<<"The value of post decrement b : "<<--b<<endl;
    return 0;
}