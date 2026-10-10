//eligibility condition for voting
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"You are eligible for voting.";
    }
    else{
        cout<<"You are not elegible for voting.";
    }
    return 0;
}