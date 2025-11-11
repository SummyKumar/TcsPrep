#include <iostream>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    vector<int>arr={7,4,8,2,9};
    int maxi=INT_MIN;
    int cnt=0;
    for(int num:arr){
        if(num>maxi){
            maxi=num;
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}