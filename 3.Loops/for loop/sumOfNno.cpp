#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter value:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
        sum +=i;
    }
    cout<<"Sum: "<<sum;
}