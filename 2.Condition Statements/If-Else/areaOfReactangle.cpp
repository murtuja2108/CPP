#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,b,area,peri;
    cout<<"Enter lenght of the Reactangle: ";
    cin>>l;
    cout<<"Enter bredth of the Reactangle: ";
    cin>>b;
    area=l*b;
    peri=2*(l+b);
    cout<<"Area of the reactangle is: "<<area<<endl<<"Perimeter of the Reactangle is: "<<peri<<endl;
    if(area>peri){
        cout<<"Area is greater then perimeter of the reactangle";
    }
    else{
        cout<<"Perimeter is greater then Area of the Reactangle";
    }
}