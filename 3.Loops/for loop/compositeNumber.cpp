#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" Number is a composite number."<<endl;
            break;
        }
    }
}