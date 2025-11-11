#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    vector<int>vec;
    while(true){
        string s;
        getline(cin,s);
        if(cin.empty())break;
        vec.push_back(stoi(s));
        
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" "<<endl;
    }
    return 0;
}