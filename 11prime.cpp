#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
//sieve of eratheses
void sieve(vector<bool>&arr){
    arr[0]=false;
    arr[1]=false;
    for(int i=2;i<10000 ;i++){
        //mark it true move next false;
        for(int j=2*i;j<10000;j+=i){
            arr[j]=false;
        }
    }
}
bool checkprime(int n){
    if(n<2)return false;
    if(n==2)return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;

}
int main(){
    int l,r;
    cin>>l>>r;
    vector<bool>arr(10000,true);
    //print all in range of l and r
    sieve(arr);
    for(int i=l;i<=r;i++){
        if(arr[i]==true){
            cout<<i<<" ";
        }
    }
    return 0;

}