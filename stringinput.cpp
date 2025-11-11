#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<limits.h>
#include<unordered_map>
#include<sstream>
using namespace std;
void printarr(vector<string>&arr){
    for(int i=0;i<arr.size();i++){
        if(i==arr.size()-1){
            cout<<arr[i]<<endl;
        }
        else{
            cout<<arr[i]<<" ";
        }    
    }

}
void spacedstringinput(){
    vector<string>arr;
    string input;
    getline(cin,input);
    stringstream ss(input);
    string token;
    while(getline(ss,token,' ')){
        arr.push_back(token);
    }
    printarr(arr);
}
void commaspacedstring(){
    vector<string>arr;
    string token;
    string input;
    getline(cin,input);
    stringstream ss(input);
    while(getline(ss,token,',')){
        arr.push_back(token);
    }
    printarr(arr);
}
void arraytypealphastring(){
    string input;
    string token;
    vector<string >arr;
    getline(cin,input);
    stringstream ss(input);
    while(getline(ss,token,',')){
        arr.push_back(token.substr(1,token.length()-2));
    }
    printarr(arr);

}
int main(){
    // spacedstringinput();
    // commaspacedstring();
    arraytypealphastring();
}