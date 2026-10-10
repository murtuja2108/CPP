#include<bits/stdc++.h>
using namespace std;
int main(){
    /*An equilateral triangle has 3 equal sides.
    An isosceles triangle has 2 equal sides.
    A scalene triangle has 3 different sides.*/
    int a,b,c;
    cout<<"Enter One side: ";
    cin>>a;
    cout<<"Enter second side: ";
    cin>>b;
    cout<<"Enter third side: ";
    cin>>c;
    if(a==b && a==c){
        cout<<"Triangle is equilateral triangle.";
    }
    else if(a==b && a!=c){
        cout<<"Triangle is isosceles triangle.";
    }
    else{
        cout<<"Triangle is scalene triangle.";
    }
}