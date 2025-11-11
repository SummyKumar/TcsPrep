#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

    
int main(){
    int n;
    cin>>n;
    vector<string>name(n);
    vector<string>age(n);
    vector<string>grade(n);
    vector<string>gender(n);
    cin.ignore();
    for(int i=0;i<n;i++){
        vector<string>in;
        string input;
        getline(cin,input);
        stringstream ss(input);
        string token;
        while(getline(ss,token,' ')){
            in.push_back(token);
        }
        name[i]=in[0];
        age[i]=in[1];
        grade[i]=in[2];
        gender[i]=in[3];
    }
    vector<string>greater;
    for(int i=0;i<n;i++){
        if(stoi(age[i])>20){
            greater.push_back(name[i]);
        }
    }
    float average=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(gender[i]=="Female"){
            cnt++;
            char ch=grade[i][0];
            average+=(int)(ch);
        }
    }
    if(cnt>0){
        average=average/cnt;
    }
    
    for(string st:greater){
        cout<<st<<" ";
    }
    cout<<endl;
    cout<<average<<endl;
}