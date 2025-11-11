#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void sieve(vector<bool>&prime){
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i<10000;i++){
        // if(prime[i]==true)
        for(int j=i*2;j<10000;j+=i){
            prime[j]=false;
        }
    }


}
bool sumofdigit(int n,vector<bool>&prime){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    return prime[sum]==true?true:false;
}
int main(){
    int l,r;
    cin>>l>>r;
    vector<bool>prime(100000,true);
    sieve(prime);
    for(int i=l;i<=r;i++){
        if(prime[i]==true && sumofdigit(i,prime)){
            cout<<i<<" ";
        }
    }
    return 0;
}