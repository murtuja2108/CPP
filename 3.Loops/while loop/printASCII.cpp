#include<bits/stdc++.h>
using namespace std;
int main(){
    int f,l;
    cout<<"Enter first number which you want: ";
    cin>>f;
    cout<<"Enter upto: ";
    cin>>l;
    int i=f;
    while(i<=l){
        cout<<(char)i<<" "<<i<<endl;
        i++;
    }
}