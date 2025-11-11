#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void takeinput(vector<string>&item,vector<float>&quantity,vector<float>&price){
    //taking string input;
    
}
int main(){
    int n=3;
    // cin>>n;
    vector<string>item(n);
    vector<float>quantity(n);
    vector<float>price(n);
    takeinput(item,quantity,price);

    //find high selling item
    string highsell="";
    float totalsell=0;
    float quan=0;
    for(int i=0;i<n;i++){
        float sum=quantity[i]*price[i];
        if(sum>quan){
            quan=sum;
            highsell=item[i];

        }
        totalsell+= sum;
    }
    float averagesell=totalsell/n;
    // printf("%s %.2f %.2f",highsell,totalsell,averagesell);
    cout<<highsell<<" "<<fixed<<setprecision(2)<<totalsell<<" "<<averagesell<<endl;


}