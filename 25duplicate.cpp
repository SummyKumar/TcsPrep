#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    getline(cin,input);
    set<string>st;
    string token;
    stringstream ss(input);
    while(getline(ss,token,' ')){
        st.insert(token);
    }
    vector<string>ans;
    for(auto s:st){
        ans.push_back(s);
    }
    for(auto st:ans){
        cout<<st<<" ";
    }
    cout<<endl;
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    

}