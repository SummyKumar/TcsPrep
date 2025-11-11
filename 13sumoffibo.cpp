
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    vector<int>fibo(n);
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    int sum=0;
    for(auto num:fibo){
        sum+=num;
    }
    cout<<sum<<endl;
    return 0;
}
