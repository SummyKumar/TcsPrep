#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int>arr;
    cin>>n;
    string in;
    cin.ignore();
    getline(cin,in);
    string input=in.substr(1,in.length()-2);
    string token;
    stringstream ss(input);
    while(getline(ss,token,' ')){
        arr.push_back(stoi(token));
    }
    vector<string>ans(n);
    for(int i=0;i<n;i++){
        if(arr[i]%3==0 && arr[i]%5==0){
            ans[i]="ThreeFive";
        }
        else if(arr[i]%3==0){
            ans[i]="Three";
        }
        else if(arr[i]%5==0){
            ans[i]="Five";
        }
        else{
            ans[i]=to_string(arr[i]);
        }
    }
    for(string st:ans){
        cout<<st<<" ";
    }
    return 0;
}