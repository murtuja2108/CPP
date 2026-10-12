#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int n=i;
        int sum=0;
        int cubes;
        while(n){
            int lastDigit=n%10;
            cubes=(lastDigit*lastDigit*lastDigit);
            sum+=cubes;
            n/=10;
        }
        if(sum==i){
            cout<<"Number is armstrong number "<<i<<endl;
        }
    }
}