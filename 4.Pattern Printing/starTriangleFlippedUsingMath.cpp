#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n;j++){
            if((i+j)>=n+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}