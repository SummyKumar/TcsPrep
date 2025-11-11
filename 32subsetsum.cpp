#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int solve(int i,int n,int sum,int target,vector<int>&arr,vector<vector<int>>&dp){
    if(sum>target)return 0;
    if(i==n){
        if(sum==target)return 1;
        return 0;
    }
    if(dp[i][sum]!=-1)return dp[i][sum];
    //take 
    int check= solve(i+1,n,sum+arr[i],target,arr,dp) +solve(i+1,n,sum,target,arr,dp);
    return dp[i][sum]=check;

}
int main(){
    string input;
    getline(cin,input);
    stringstream ss(input);
    int target;
    
    string token;
    vector<int>arr;
    while(getline(ss,token,' ')){
        arr.push_back(stoi(token));
    }
    cin>>target;
    int n=arr.size();
    vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
    int sum=0,i=0;
    cout<<solve(i,n,sum,target,arr,dp)<<endl;
    
}