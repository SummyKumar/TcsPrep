#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    getline(cin,input);
    string token;
    vector<int>arr;
    stringstream ss(input);
    while(getline(ss,token,' ')){
        arr.push_back(stoi(token));
    }
    int k;
    cin>>k;
    unordered_map<int,int>mp;
    int count=0;
    // mp[0]=1;
    int prefixsum=0;
    for(int i=0;i<arr.size();i++){
        prefixsum+=arr[i];
        if(prefixsum==k){
            count++;
        }
        int rem=prefixsum-k;
        if(mp.find(rem)!=mp.end()){
            count+=mp[rem];
        }
        mp[prefixsum]++;


    }
    cout<<count<<endl;

}