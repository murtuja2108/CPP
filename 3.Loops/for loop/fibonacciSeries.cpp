#include<bits/stdc++.h>
using namespace std;
int main(){
    /*fiboacci series start with 1,1,next term is (addition of previous 2 term) means (1+1=2),next terms is (addition of previous 2 term)
    means (1+2=3) and so on.
    */
    int a=1,b=1;//also a=1,b=1
    // cout<<"Enter first number: ";
    // cin>>a;
    // cout<<"Enter second number: ";
    // cin>>b;
    int n,sum=0;
    cout<<"Enter term: ";
    cin>>n;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;//this line ans below this order is importent means does not alternate this 2 lines with each others
        b=sum;
    }
    cout<<b;
}