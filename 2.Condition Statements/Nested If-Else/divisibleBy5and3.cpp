#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"the number is divisible by 5 and 3 both";
        }
        else{
            cout<<"The number is divisible by 5 but not 3.";
        }
    }else{
        cout<<"the number is not divisible by 5 and 3";
    }
}