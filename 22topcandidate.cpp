#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<queue>
using namespace std;
int main(){
    string in;
    //use cin.ignore()if using single input cin>> first as it has new empty line in buffer
    getline(cin,in);
    int k=in[0];
    int numofstudent=in[2];
    string input=in.substr(4,in.length()-4);

    stringstream ss(input);
    string token;
    vector<string>arr;
    while(getline(ss,token,' ')){
        arr.push_back(token);
    }
    priority_queue<pair<int,string>,vector<pair<int,string>>>pq;
    for(int i=0;i<arr.size();i+=2){
        int score=stoi(arr[i]);
        string name=arr[i+1];
        pq.push({score,name});
    }
    while(k>0 && !pq.empty()){
        pair<int,string> p=pq.top();
        int score=p.first;
        string name=p.second;
        cout<<name<<":"<<score<<endl;
        pq.pop();
        k--;
    }
    return 0;
    

}