#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    int col;
    cin>>row>>col;
    cin.ignore();
    string in;
    getline(cin,in);
    string input=in.substr(1,in.length()-2);
    stringstream ss(input);
    vector<int>arr;
    string token;
    while(getline(ss,token,' ')){
        arr.push_back(stoi(token));
    }
    int rowcount=1;
    int maxi=0;
    int maxrow=0;
    for(int i=0;i<arr.size();i+=3){
        int sum=arr[i]+arr[i+1]+arr[i+2];
        if(sum>maxi){
            maxi=sum;
            maxrow=i/3+1;
        }
        rowcount++;
    }
    cout<<maxrow<<endl;
}