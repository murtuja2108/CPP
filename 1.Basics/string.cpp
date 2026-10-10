#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Murtuja";//here also starting as 0 index
    int len=s.size();
    s[len-2]='z';//here we can't use "" alternate of '' because we add character not add string
    cout<<s<<endl;
    cout<<s[3];
}