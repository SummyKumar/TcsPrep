#include<iostream>
#include<string>
using namespace std;
string solve(string input,int n){
    //check if it is in password mode;
    string ans="";
    for(int i=0;i<input.length();i++){
        if(input[i]>='A' && input[i]<='Z'){
            int num=input[i]-'A';
            int sum=(num+n)%26;
            char ch=sum+'A';
            ans.push_back(ch);
        }
        else if(input[i]>='a' && input[i]<='z'){
            int num=input[i]-'a';
            int sum=(num+n)%26;
            char ch=sum+'a';
            ans.push_back(ch);
        }
        else if(input[i]>='0' && input[i]<='9'){
            int num=input[i]-'0';
            int sum=(num+n)%10;
            char ch=sum+'0';
            ans.push_back(ch);
        }
        else{
            if(input[i]=='@')ans.push_back('#');
            else ans.push_back('@');
            
        }
    }
    return ans;
}
bool check(string input){
    if(input.length()<8)return false;
    bool islower=false,isupper=false,isdigit=false,isspeacial=false;
    for(int i=0;i<input.length();i++){
        if(input[i]>='A' && input[i]<='Z'){
            isupper=true;
           
        }
        else if(input[i]>='a' && input[i]<='z'){
            islower=true;
        }
        else if(input[i]>='0' && input[i]<='9'){
            isdigit=true;
        }
        else if(input[i]=='@' ||input[i]=='#'){
            isspeacial=true;
        }
    }
    return isspeacial&&islower&&isdigit&&isupper;
}
int main(){
    string input;
    int n;
    cin>>input;
    if(check(input))cin>>n;
    else {
        cout<<"INVALID"<<endl;
        return 0;
    }

    string ans=solve(input,n);
    cout<<ans<<endl;
}