#include<bits/stdc++.h>
using namespace std;
string encrypt(string input,int key){
    for(int i=0;i<input.length();i++){
        char ch=input[i];
        if(ch>='A' && ch<='Z'){
            int curr=ch-'A';
            int newcurr=(curr+key)%26;
            input[i]=(char)(newcurr+'A');
        }
        else if(ch>='a' && ch<='z'){
            int curr=ch-'a';
            int newcurr=(curr+key)%26;
            input[i]=(char)(newcurr+'a');

        }
        else if(ch>='0' && ch<='9'){
            int curr=ch-'0';
            int newcurr=(curr+key)%10;
            input[i]=(char)(newcurr+'0');

        }
        else{
            continue;
        }
    }
    return input;
}
int main(){
    string input;
    int key;
    cout<<"Enter your PlainText:";
    getline(cin,input);
    cout<<"Enter the key:";
    cin>>key;
    bool flag=0;
    if(key<0){
        flag=1;
    }
    if(flag==0){
        string ans=encrypt(input,key);
        cout<<ans<<endl;
    }
    else{
        cout<<"INVALID INPUT"<<endl;
    }
}