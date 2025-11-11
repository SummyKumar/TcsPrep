// Online C++ compiler to run C++ program online
#include <iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    string in;
    getline(cin,in);
    string input=in.substr(5,in.length()-5);
    stringstream ss(input);
    string token;
    vector<int>arr;
    while(getline(ss,token,' ')){
        arr.push_back(stoi(token));
    }
    int maxi=0;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi<<endl;
    
    

    return 0;
}