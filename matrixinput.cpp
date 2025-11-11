#include<bits/stdc++.h>
using namespace std;
int main(){
    string in;
    getline(cin,in);
    string input=in.substr(1,in.length()-2);
    vector<string>arr;
    for(int i=0;i<input.length();i++){
        if(input[i]=='['){
            int start=i+1;
            int end=i+1;
            while(end<input.length()){
                if(input[end]==']')break;
                end++;
            }
            i=end;
            end=end-1;
            arr.push_back(input.substr(start,end-start+1));
            
        }
    }
    vector<vector<int>>matrix;
    for(string st:arr){
        vector<int>temp;
        stringstream ss(st);
        string token;
        while(getline(ss,token,',')){
            temp.push_back(stof(token));
        }
        matrix.push_back(temp);
    }
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
