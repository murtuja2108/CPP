#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int k;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            k=1;
        }
        else{
            k=0;
        }
        for(int j=1;j<=i;j++){
            cout<<k;
            //flipping
            if(k==1){
                k=0;
            }
            else{
                k=1;
            }
        }
        cout<<endl;
    }
}