#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
void printarr(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
void solve(int i,int n,vector<int>&arr,vector<string>&comb,string s){
    if(i==n){
        if(!s.empty())comb.push_back(s.substr(1,s.length()-1));
        return;
    }
    //take 
    
    solve(i+1,n,arr,comb,s+" "+to_string(arr[i]));
    solve(i+1,n,arr,comb,s);
    
    //not take
}
void usingbitmapping(vector<string>&comb,vector<int>arr){
    int total=1<<arr.size();
    int size=arr.size();
    for(int i=0;i<total;i++){
        string s="";
        for(int j=0;j<size;j++){
            if((i&(1<<j))){
                s+= " "+to_string(arr[j]);
            }
            
        }
        if(!s.empty())comb.push_back(s.substr(1,s.length()-1));
    }
}
int main(){
    string input;
    string token;
    getline(cin,input);
    int count=0;
    stringstream ss(input);
    vector<int>arr;
    while(getline(ss,token,' ')){
        if(count==0){
            count++;
            continue;
        }
        else{
            arr.push_back(stoi(token));
        }
    }
    printarr(arr);
    vector<string>comb;
    string s="";
    // solve(0,arr.size(),arr,comb,s);
    usingbitmapping(comb,arr);

    //print vector;
    cout<<endl;
    // sort(comb.begin(),comb.end());
    for(int i=0;i<comb.size();i++){
        if(i==comb.size()-1){
            cout<<comb[i];
        }
        else cout<<comb[i]<<",";
        
    }
    cout<<endl;
    return 0;



}