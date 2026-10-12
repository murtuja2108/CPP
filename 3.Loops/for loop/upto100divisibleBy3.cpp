#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter the last number which is you want: ";
    cin>>x;
    // for(int i=1;i<=x;i++){
    //     if(i%3==0){
    //     cout<<i<<endl;
    //     }
    // }
    for(int i=3;i<=x;i+=3){
        cout<<i<<endl;
    }
}
