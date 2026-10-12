#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter the last number which is you want: ";
    cin>>x;
    //Below code is valid for only 2 difference terms 
    //and this type code is changable for other difference numbers 
    // for(int i=1;i<=(2*x-1);i+=2){
    //     cout<<i<<endl;
    // }

    //below code is valid for every AP series
    //only change in a and print the series  
    int a=4;
    for(int i=1;i<=x;i++){
        cout<<a<<endl;
        a+=3;
    }
}