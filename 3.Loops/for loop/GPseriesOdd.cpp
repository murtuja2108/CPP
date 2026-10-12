#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter the last number which is you want: ";
    cin>>x;
    int a=1;
    for(int i=1;i<=x;i++){
        cout<<a<<endl;
        a*=3;//9,27...
    }
}
