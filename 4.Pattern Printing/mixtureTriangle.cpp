#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        if(i==n) continue;
        cout<<endl;
        for(int k=1;k<=i+1;k++){
            cout<<(char)(k+64);
        }
        cout<<endl;
        i++;
    }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         if(i%2!=0){
    //             cout<<j;
    //         }
    //         else{
    //             cout<<(char)(j+64);
    //         }
    //     }
    //     cout<<endl;
    // }
}