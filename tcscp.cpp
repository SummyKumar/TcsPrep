#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    vector<int>vec;
    while(cin>>k){
        if(k==-1){
            break;
        }
        vec.push_back(k);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" "<<endl;
    }
    return 0;
}