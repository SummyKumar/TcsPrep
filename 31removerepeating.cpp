#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    string ans="";
    for(int i=0;i<input.length();i++){
        char ch=input[i];
        int start=i;
        int end=i;
        while(end<input.length() ){
            if(input[end]!=ch)break;
            end++;
        }
        ans.push_back(ch);
        end--;
        i=end;
    }
    
    cout<<ans<<endl;
}