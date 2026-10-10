#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first student marks: ";
    cin>>a;
    cout<<"Enter second student marks: ";
    cin>>b;
    cout<<"Enter third student marks: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"First student got highest marks.";
    }
    else if(b>a && b>c){
        cout<<"Second student got highest marks.";
    }
    else{
        cout<<"Third student got highest marks.";
    }
}