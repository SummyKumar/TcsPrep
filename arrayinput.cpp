#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<limits.h>
using namespace std;
void printarr(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        if(i==arr.size()-1){
            cout<<arr[i]<<endl;
        }
        else{
            cout<<arr[i]<<" ";
            // printf("%d ",arr[i]);
        }
        
    }

}
void spaced_array_input(){
    string input;
    getline(cin,input);
    stringstream ss(input);
    string n;
    vector<int>arr;
    while(getline(ss,n,' ')){
        arr.push_back(stoi(n));
    }
    printarr(arr);
}

void comma_array_input(){
    string input;
    getline(cin,input);
    stringstream ss(input);
    string token;
    vector<int>arr;
    while(getline(ss,token,',')){
        arr.push_back(stoi(token));
    }
    printarr(arr);

}
void input_array_format(){
    string input;
    getline(cin,input);
    string s=input.substr(1,input.size()-2);
    stringstream ss(s);
    string token;
    vector<int>arr;
    while(getline(ss,token,',')){
        
        arr.push_back(stoi(token));
    }
    printarr(arr);
}
void stopwhenemptylineentered(){
    vector<int>arr;
    string input;
    while(true){
        getline(cin,input);
        if(input.empty())break;
        int k=stoi(input);
        if(k==-1 ||k>100){
            cout<<"INVALID INPUT"<<endl;
            return;
        }
        arr.push_back(k);
        //do some calculation
    }
    printarr(arr);
}
void mostusedinputformat(){
    string s;
    getline(cin,s);
    vector<int>nums;
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9')temp+=s[i];
        else{
            nums.push_back(stoi(temp));
            temp="";
        }
    }
    if(!temp.empty()){
        nums.push_back(stoi(temp));
    }
    printarr(nums);
}
int main(){
    // spaced_array_input();
    // comma_array_input();
    // input_array_format();
    // stopwhenemptylineentered();
    mostusedinputformat();

    
    return 0;

}