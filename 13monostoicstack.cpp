#include<bits/stdc++.h>
using namespace std;
void printarr(vector<int>&arr){
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;
}
int main(){
    deque<pair<int,int>>dq;
    int k=3;
    vector<int>arr={2,4,7,1,6,3};
    vector<int>ans;
    // for(int i=0;i<arr.size();i++){
    //     while(!dq.empty() && dq.front().first<=i-k){
    //         dq.pop_front();
    //     }
    //     while(!dq.empty() && dq.back().second<arr[i]){
    //         dq.pop_back();
    //     }
    //     dq.push_back({i,arr[i]});
    //     if(i>=2){
    //         ans.push_back(dq.front().second);
    //     }
    // }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(int i=0;i<arr.size();i++){
        while(!pq.empty() && pq.top().first<=i-k){
            pq.pop();
        }
        while(!pq.empty() && pq.top().second <arr[i])pq.pop();
        pq.push({i,arr[i]});
        if(i>=k-1){
            ans.push_back(pq.top().second);
        }
    }
    printarr(ans);
}