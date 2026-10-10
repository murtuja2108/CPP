#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a integer number:";
    cin>>n;
    if(n>0){
        cout<<n;
    }
    else{//n<=0
        cout<<-n;
    }
    return 0;
    /*
    if(n<0){
        n=-n;
    }
    cout<<n;
    */
}