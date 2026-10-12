#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][5];//in 2D array first element {here[3]} indicates the row number and second elements {here[5]} indicates colomn number 
    cout<<"Row number is 3 & colomn number is 5"<<endl;
    cout<<"First row and five colomn are: ";
    cin>>arr[0][0]>>arr[0][1]>>arr[0][2]>>arr[0][3];//>>arr[0][4];
    cout<<"Second row and five colomn are: ";
    cin>>arr[1][0]>>arr[1][1]>>arr[1][2]>>arr[1][3]>>arr[1][4];
    cout<<"Third row and five colomn are: ";
    cin>>arr[2][0]>>arr[2][1]>>arr[2][2]>>arr[2][3]>>arr[2][4];
    cout<<"1: "<<arr[0][4];
    //if we does not give input but we expect that we print a element which inputs not given then compiler give garbage value.
    // soppose we does not give input in arr[0][4] or any other rows ij element then it gives garbage value 
    return 0;
}