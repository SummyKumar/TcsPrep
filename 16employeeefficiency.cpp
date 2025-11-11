#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        maxi=max(maxi,k);
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());
    int ans;
    if(arr[n-1]<=0){
        ans=arr[n-1]*arr[n-2]*arr[n-3];
    }
    else{
        int first=arr[n-1];
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n-1;j++){
                maxi=max(maxi,arr[i]*arr[j]);
            }
        }
        ans=maxi*first;
    }
    cout<<ans<<endl;

}