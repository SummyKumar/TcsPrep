#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    
    float wt,ds,base=5;
    wt=stof(a.substr(0,a.length()-3));
    ds=stof(b.substr(0,b.length()-3));

    printf("$%.2f",(wt*2 )+base+((ds/10 )*0.5));
}