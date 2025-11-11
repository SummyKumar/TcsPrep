#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<sstream>
using namespace std;
bool checkarmstrong(int num){
    int size=to_string(num).length();
    int k=num;
    int sum=0;
    while(num>0){
        int digit=num%10;
        sum+= pow(digit,size);
        num=num/10;
    }
    return sum==k;
}
int main(){
    string in;
    getline(cin,in);
    string input=in.substr(1,in.length()-2);
    stringstream ss(input);
    string token;   
    vector<int>arr;
    while (getline(ss,token,',')){
        arr.push_back(stoi(token));
    }
    vector<int>ans;
    for(int num:arr){
        if(checkarmstrong(num)){
            ans.push_back(num);
        }
    }
    for(int num:ans){
        cout<<num<<" ";
    }
    return 0;
    
    
}