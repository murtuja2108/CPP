#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    char k='a';//'A'
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k;
        }
        k++;
        cout<<endl;
    }
}