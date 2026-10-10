#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter year: ";
    cin>>n;
    if(n%4==0){
        if(n%100==0 && n%400!=0){
            cout<<"Year is not a leap year";
        }
        else{
            if(n%400==0){
                cout<<"Enter year is a leap year";
            }
            else{
                cout<<"Enter year is a leap year";
            }
        }
    }
    else{
        cout<<"Year is not a leap year";
    }
}