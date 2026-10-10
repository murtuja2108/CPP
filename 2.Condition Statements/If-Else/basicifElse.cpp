#include<bits/stdc++.h>
using namespace std;
int main(){
    /*int age;
    cin>>age;
    if(age>=18){
        cout<<"You are an adult..";
    }
    else if(age<11){
        cout<<"You are not an adult..";//else part is not mandatory
    }
    else{
        cout<<"You are not an adult..";//else part is not mandatory
    }
    */
   /*
   float marks;
   cin>>marks;
   if (marks<25){
    cout<<"F";
   }
   else if(marks<40){
    cout<<"D";
   }
   else if(marks<50){
    cout<<"C";
   }
   else if(marks<60){
    cout<<"B";
   }
   else if (marks<70){
    cout<<"A";
   }
   else if(marks<80){
    cout<<"A+";
   }
   else if(marks<90){
    cout<<"E";
   }
   else if(marks<=100){
    cout<<"O";
   }*/
  int age;
  cin>>age;
  if(age<=18){
    cout<<"Not eligible for job";
  }
  else if(age <=59){
    cout<<"Eligible for job";
    if(age>55){
        cout<<", but retirment soon";
    }
  }
  else{
    cout<<"It's time to Retirment";
  }
}