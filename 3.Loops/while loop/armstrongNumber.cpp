/* Armstrong Number:
            If sum of cubes of each digit of the number is equal to the number itself,
            then the number is called an Armstrong number.
            153=(1*1*1)+(5*5*5)+(3*3*3)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum=0;
    int cubes;
    int a=n;
    while(n){
        int lastDigit=n%10;
        cubes=(lastDigit*lastDigit*lastDigit);
        sum+=cubes;
        n/=10;
    }
    if(sum==a){
        cout<<"Number is armstrong number "<<a<<endl;
    }
    else{
        cout<<"Number is not a amrstrong number.";
    }
}