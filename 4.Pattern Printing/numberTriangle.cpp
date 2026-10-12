#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){//j<=i means for each rows -> no. of rows = no. of columns
            cout<<j;
        }
        cout<<endl;
    }
}