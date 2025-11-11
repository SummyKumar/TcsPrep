#include<iostream>
#include<vector>
using namespace std;
int main(){
    int intwalls;
    int extwalls;
    cin>>intwalls;
    cin>>extwalls;
    float totalcost=0;
    for(int i=0;i<intwalls;i++){    
        float k;
        cin>>k;
        totalcost+= k*18;

    }
    for(int i=0;i<extwalls;i++){
        float k;
        cin>>k;
        totalcost+= k*12;
    }
    printf("Total estimated cost :%.1f INR",totalcost);
}
