#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum=0;
    //Below part is using loop
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0){
    //         sum+=i;
    //     }
    //     else{
    //         sum-=i;
    //     }
    // }
    //Below part is using conditions
    if(n%2==0){
        sum=-n/2;
    }
    else{
        sum=((-n/2)+n);
    }
    cout<<sum;
}