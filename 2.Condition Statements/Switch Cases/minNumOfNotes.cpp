#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter amount: ";
    cin>>x;
    int n1,n2,n5,n10,n20,n50,n100,n200,n500;
    n1=n2=n5=n10=n20=n50=n100=n200=n500=0;
    switch(x>=500){
        case 1:
            n500+=x/500;
            x-=n500*500;
            break;
    }
    switch(x>=200){
        case 1:
            n200+=x/200;
            x-=n200*200;
            break;
    }
    switch(x>=100){
        case 1:
            n100+=x/100;
            x-=n100*100;
            break;
    }
    switch(x>=50){
        n50+=x/50;
        x-=n50*50;
        break;
    }
    switch(x>=20){
        case 1:
            n20+=x/20;
            x-=n20*20;
            break;
    }
    switch(x>=10){
        case 1:
            n10+=x/10;
            x-=n10*10;
            break;
    }
    switch(x>=5){
        case 1:
            n5+=x/5;
            x-=n5*5;
            break;
    }
    switch(x>=2){
        case 1:
            n2+=n2/2;
            x-=n2*2;
            break;
    }
    switch(x>=1){
        case 1:
            n1+=x/1;
            x-=n1*1;
            break;
    }
    cout<<"Rs 500 note: "<<n500<<endl;
    cout<<"Rs 200 note: "<<n200<<endl;
    cout<<"Rs 100 note: "<<n100<<endl;
    cout<<"Rs 50 note: "<<n50<<endl;
    cout<<"Rs 20 note: "<<n20<<endl;
    cout<<"Rs 10 note: "<<n10<<endl;
    cout<<"Rs 5 note: "<<n10<<endl;
    cout<<"Rs 2 note: "<<n2<<endl;
    cout<<"Rs 1 note: "<<n1<<endl;
}