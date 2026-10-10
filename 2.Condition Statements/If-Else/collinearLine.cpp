#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter One side: ";
    cin>>x1>>y1;
    cout<<"Enter second side: ";
    cin>>x2>>y2;
    cout<<"Enter third side: ";
    cin>>x2>>y3;
    int m1,m2;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        cout<<"Three points fall in same straight line.";
    }
    else{
        cout<<"Three points are not in same straignt line.";
    }
}