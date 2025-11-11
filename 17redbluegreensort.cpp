#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    string in;
    string token;
    getline(cin,in);
    string input=in.substr(6,in.length()-7);
    stringstream ss(input);
    vector<int>nums;
    while(getline(ss,token,',')){
        nums.push_back(stoi(token));
    }
    int count3=0;
    int count6=0;
    int count7=0;
    for(auto num:nums){
        if(num==3)count3++;
        if(num==6)count6++;
        if(num==7)count7++;
    }
    for(int i=0;i<nums.size();i++){
        if(count3>0){
            cout<<3<<" ";
            count3--;
        }
        else if(count6>0){
            cout<<6<<" ";
            count6--;
        }
        else if(count7>0){
            cout<<7<<" ";
            count7--;
        }
    }

}