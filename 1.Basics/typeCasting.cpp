#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Hello World"<<endl;
    char grade='a';
    int age=grade;//This is called Implicit conversion and This is used for small data{character} convert into big data{integer} type
    cout<<age<<endl;
    double price=102.99;
    int fixPrice=(int)price;//this is called Typecasting(explicit) and this is used for big data store in small data type
    cout<<fixPrice<<endl;
    cout<<(5/(double)2)<<endl;
    return 0;   
}