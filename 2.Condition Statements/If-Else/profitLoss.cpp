#include<bits/stdc++.h>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter the Cost price: ";
    cin>>cp;
    cout<<"Enter the Selling price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profix = "<<sp-cp;
    }else if(cp>sp){
        cout<<"Loss = "<<cp-sp;
    }else{
        cout<<"No profit no loss";
    }

}