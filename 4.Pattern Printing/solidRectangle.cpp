//Rectangle means (no. of rows)!=(no. of columns)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Engter rows: ";
    cin>>m;
    cout<<"Enter columns: ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}