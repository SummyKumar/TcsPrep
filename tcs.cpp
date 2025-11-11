#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
class Node{
    public:
    vector<int>list;
    int size;
    Node* prev;
    Node* next;
    Node(vector<int>arr,int size){
        
        list=arr;
        this->size=arr.size();
        prev=NULL;
        next=NULL;
        
    }
};
class DoubleLinkedList{
    public:
    Node* head;
    DoubleLinkedList(){
        head=NULL;

    }
    void insertatend(vector<int>arr,int size){
        Node* newNode=new Node(arr,size);
        if(head==NULL){
            head=newNode;
            
            return;
        }
        
        Node* curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=newNode;
        newNode->prev=curr;
    }
    void printNodes(){
        Node* curr = head;
        cout<<"Node values :  ";
        while(curr != NULL){
            for(int i = 0; i < curr->list.size(); i++){
                cout << curr->list[i] << "  ";
            }
            
            cout>>end;
            curr = curr->next;
        }
    }

};

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int k;
            cin>>k;
            arr[i][j]=k;
        }
    }
    DoubleLinkedList dl;
    
    for(int i=0;i<n;i+=2){
        dl.insertatend(arr[i],m);
    }
    for(int i=1;i<n;i+=2){
        dl.insertatend(arr[i],m);
    }
    dl.printNodes();
    return 0;

}