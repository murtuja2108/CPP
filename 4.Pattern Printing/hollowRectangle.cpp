#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Engter rows: ";
    cin>>n;
    cout<<"Enter columns: ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 || i==n || j==1 || j==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    // for(int i=1;i<=m;i++){
    //     cout<<"*";
    // }
    // cout<<endl;
    // for(int i=2;i<=n-1;i++){
    //     cout<<"*";
    //     for(int j=1;j<=m-2;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     cout<<endl;
    // }
    // for(int i=1;i<=m;i++){
    //     cout<<"*";
    // }
}