// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
    int bucket;
    int mug;
    cin>>bucket>>mug;
    if(bucket<=0 || mug<=0 || !(bucket>mug)){
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }
    int filled=0;
    int cap=0.8*bucket;
    bool flag=0;
    int mugcount=0;
    while(filled<cap){
        int k;
        cin>>k;
        if(k<0 || k>mug){
            flag=1;
            break;
        }
        filled+=k;
        mugcount++;

    }
    if(flag==0){
        cout<<"BUCKET FULL!"<<endl;
        cout<<"NUMBER OF MUGS:"<<mugcount<<endl;
    }
    else{
        cout<<"INVALID INPUT"<<endl;
    }

    return 0;
}