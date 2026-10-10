#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter x-axis: ";
    cin>>a;
    cout<<"Enter y-axis: ";
    cin>>b;
    if(a==0 && b!=0){
        cout<<"the point is in y-axis and position is (0,"<<b<<")";
    }
    else if(b==0 && a!=0){
        cout<<"the point is in x-axis and position is ("<<a<<",0)";
    }
    else if(a==0 && b==0){
        cout<<"point is in origin means(0,0).";
    }
    else{
        cout<<"Location is in "<<a<<" in x -axis direction and "<<b<<" in y-axis direction means ("<<a<<","<<b<<").";
    }
}