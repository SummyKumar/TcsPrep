#include<bits/stdc++.h>
using namespace std;
void merge(int low,int high,int mid,vector<int>&arr){
    int left=low;
    int right=mid+1;
    vector<int>newarr;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            newarr.push_back(arr[left]);
            left++;
        }
        else{
            newarr.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        newarr.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        newarr.push_back(arr[right]);
        right++;
    }
    int j=0;
    for(int i=low;i<=high;i++){
        arr[i]=newarr[j];
        j++;
    }
}
void mergesort(int low,int high,vector<int>&arr){
    if(low<high){
        int mid=low+(high-low)/2;
        mergesort(low ,mid,arr);
        mergesort(mid+1,high,arr);
        merge(low,high,mid,arr);
    }
}
void printarr(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        if(i==arr.size()-1){
            cout<<arr[i]<<endl;
        }
        else{
            cout<<arr[i]<<" ";
        }
        
    }

}
int partition(int low,int high,vector<int>&arr){
    int pivot=arr[low];
    int start=low+1;
    int end=high;
    while(start<end){
        while(start<=end && arr[start]<=pivot)start++;
        while(end>=start && arr[end]>pivot)end--;
        if(start<end){
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[low],arr[end]);
    return end;

}
void quicksort(int low,int high,vector<int>&arr){
    if(low<high){
        int p=partition(low,high,arr);
        quicksort(low,p-1,arr);
        quicksort(p+1,high,arr);
    }
}
int main(){
    vector<int>arr={2,4,631,6,2,0};
    printarr(arr);
    // mergesort(0,arr.size()-1,arr);
    quicksort(0,arr.size()-1,arr);
    printarr(arr);
    return 0;
}