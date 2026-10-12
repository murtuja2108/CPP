#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter last number: ";
    cin>>n;
    // for(int i=1;i<=n;i+=2){
    //     cout<<i<<endl;
    //     continue;
    // }
    for(int i=1;i<=n;i++){
        if(i%2==0){
            //cout<<i<<endl;
            continue;
        }
        cout<<i<<endl;
    }
    // cout<<"Even Number."<<endl;
    // for(int i=2;i<=n;i+=2){
    //     cout<<i<<endl;
    // }
}