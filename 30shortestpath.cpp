#include<bits/stdc++.h>
using namespace std;
int main(){
    int nov,noe;
    cin>>nov>>noe;
    unordered_map<int,vector<pair<int,int>>>graph;
    for(int i=0;i<noe;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    vector<int>parent(nov+1,-1);
    int src,des;
    cin>>src>>des;
    vector<int>dis(nov+1,INT_MAX);
    dis[src]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    //{dis,node}
    pq.push({0,src});
    while(!pq.empty()){
        
        int curr_node=pq.top().second;
        int distance=pq.top().first;
        pq.pop();
        if(distance>dis[curr_node])continue;
        
        for(auto nbr:graph[curr_node]){
            int v=nbr.first;
            int wt=nbr.second;
            if(distance+wt<dis[v]){
                dis[v]=distance+wt;
                parent[v]=curr_node;
                pq.push({dis[v],v});
            }
        }

    }
    if(dis[des]==INT_MAX){
        cout<<"NO path exist"<<endl;
    }
    vector<int>path;
    for(int node=des;node!=-1;node=parent[node]){
        path.push_back(node);
    }
    reverse(path.begin(),path.end());
    cout<<"Shortest path"<<endl;
    for(int i=0;i<path.size();i++){
        cout<<path[i];
        if(i<path.size())cout<<"->";

    }
    
    
}