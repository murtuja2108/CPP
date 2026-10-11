#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    /*
    #for normal if else conditon
    if((n%5==0 || n%3==0) && n%15!=0){
        cout<<"the number is divisible by 5 or 3";
    }else{
        cout<<"the number is not divisible by 5 or 3";
    }
    */
    if(n%5==0 || n%3==0){
        if(n%15 !=0){
            cout<<"the number is divisible by 5 or 3 but not 15.";
        }
        else{
            cout<<"Not matching conditon.";
        }
    }else{
        cout<<"Not matching condition.";
    }
}