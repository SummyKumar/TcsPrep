#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    stringstream ss(s);
    string token;
    vector<string>arr;
    while(getline(ss,token,' ')){
        arr.push_back(token);
    }
    unordered_map<char,int>left;
    unordered_map<char,int>right;
    for(string st:arr){
        int size=stoi(st.substr(0,st.length()-1));
        char dir=st[st.length()-1];
        if(dir=='L'){
            left[size]++;
        }
        else{
            right[size]++;
        }
    }
    int pair=0; 
    for(auto p:left){
        int size=p.first;
        int mini=min(left[size],right[size]);
        pair+=mini;
    }
    cout<<pair<<endl;


}