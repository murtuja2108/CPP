#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Before swapping the value :\n"<<endl;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"After swapping the value :"<<"\n"<<endl;
    cout<<"Print the value of a: "<<a<<endl<<"Print the value of b: "<<b;
    
}