#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string>cps={"MH04CC2", "MH04C2820", "MH04BB3232", "MH04CC2113", "MH04CC278", "MH04BB8", "MH04CC2888" , "MH04CC1313", "MH04CC2222", "MH04C1201", "MH04CC555", "MH04C6565", "MH04A7"};
    int ch;
    cin>>ch;
    string plate;
    cin>>plate;
    bool flag=1;
    if(!(plate.length()>=6 && plate.length()<=12))flag=0;
    if(flag==0){
        cout<<"CAR DOES NOT EXIST"<<endl;
    }
    else if(ch==1){
        int index=-1;
        for(int i=0;i<cps.size();i++){
            if(plate==cps[i]){
                index=1+i;
            }
        }
        if(index!=-1){
            cout<<"CAR PARKED AT POSITION:"<<index<<endl;
        }
        else{
            cout<<"INVALID INPUT"<<endl;
        }
    }
    else if(ch==2){
        int index=-1;
        for(int i=0;i<cps.size();i++){
            if(plate==cps[i]){
                index=1+i;
            }
        }
        if(index!=-1){
            cout<<"CAR PARKED AT POSITION:"<<index<<endl;
        }
        else{
            cout<<"CAR DOES NOT EXIST"<<endl;
        }
        
    }
    else{
        cout<<"INVALID INPUT"<<endl;
    }
    return 0;
}