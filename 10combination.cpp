#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void printarr(vector<string>&ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
void backtrack(int a,int b,int c,int n,int len,vector<string>&ans,string s){
    if(len==n){
        ans.push_back(s);
        return;
    }
    if(a>0)backtrack(a-1,b,c,n,len+1,ans,s+'A');
    if(b>0)backtrack(a,b-1,c,n,len+1,ans,s+'B');
    if(c>0)backtrack(a,b,c-1,n,len+1,ans,s+'C');
    

}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<string>ans;
    int start=0;
    string s="";
    
    backtrack(a,b,c,n,0,ans,s);
    printarr(ans);
    return 0;

}
