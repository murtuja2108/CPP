#include<bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cout<<"Enter your marks: ";
    cin>>n;
    if(n>=91){
        cout<<"Excellent.";
    }
    else{
        if(n>=81){
            cout<<"very Good.";
        }
        else{
            if(n>=71){
                cout<<"Good.";
            }
            else{
                if(n>=61){
                    cout<<"Can do better.";
                }
                else{
                    if(n>=51){
                        cout<<"Average.";
                    }else{
                        if(n>=41){
                            cout<<"Below Average.";
                        }
                        else{
                            cout<<"Fail.";
                        }
                    }
                }
            }
        }
    }
}