#include<iostream>
#include<vector>
using namespace std;
void findsequence(int n,vector<int>&seq,int& maxi){
    seq.push_back(n);
    if(n==1){
        return ;
    }
    else if(n%2==0){
        maxi=max(maxi,n/2);
        findsequence(n/2,seq,maxi);
    }
    else{
        maxi=max(maxi,n*3+1);
        findsequence(n*3+1,seq,maxi);
    }
}
int solve(int n){
    vector<int>seq;
    int maxi=1;
    findsequence(n,seq,maxi);
    return maxi;
}
int solve2(int n){
    vector<int>seq;
    int maxi=1;
    findsequence(n,seq,maxi);
    return seq.size();
}
void calculatefunc(vector<int>&arr,int n){
    arr.push_back(n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
            arr.push_back(n);
        }
        else {
            n=n*3+1;
            arr.push_back(n);
        }
    }

}
int main(){
    int n;
    cin>>n;
    if(n<=0){
        cout<<"Error!"<<endl;
    }
    vector<int>arr;
    calculatefunc(arr,n);
    
    int maxi_seq_value=1;
    int maxi_k_value=-1;
    int maxi_len_value=-1;
    int maxi_k2_value=1;
    for(int i=1;i<=n;i++){
        int findnum=solve(i);
        //find max seqq and its k value
        if(maxi_seq_value<findnum){
            maxi_seq_value=findnum;
            maxi_k_value=i;
        }
        //find max len of seq and its k value;
        int len=solve2(i);
        if(len>maxi_len_value){
            maxi_len_value=len;
            maxi_k2_value=i;
        }
    }
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl<<maxi_len_value<<" "<<maxi_k2_value<<endl;
    cout<<maxi_seq_value<<" "<<maxi_k_value<<endl;
    return 0;

}