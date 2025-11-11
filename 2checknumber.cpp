// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
bool findvalid(string s){
    if(s.length()!=5)return false;
    int flag=0;
    for(char ch:s){
        if(!(ch>='0' && ch<='9'))flag=1;
    }
    return flag==1?false:true;
}

int main() {
    // Write C++ code here
    int count=0;
    int invalid=0;
    bool flag=0;
    while(true){
        string s;
        cin>>s;
        count++;
        
        if(count>5){
            flag=0;
            break;
        }
        else if(s=="q" || s=="Q"){
            invalid++;
            break;
        }
        else{
            bool check=findvalid(s);
            if(!check)invalid++;
        }
    }
    if(flag==0 && count==5){
        cout<<invalid<<endl;
    }
    else{
        cout<<"INPUT LIMIT IS 5"<<endl;
    }
    return 0;
}