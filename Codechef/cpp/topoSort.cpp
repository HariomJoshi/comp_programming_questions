#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
#include<stack>


using namespace std;



void dfs(int i, unordered_map<int, list<int>> &adj, vector<bool> &visited, stack<int> &st){
    visited[i] = true;
    for(auto neighbour: adj[i]){
        if(!visited[neighbour]){
            dfs(neighbour, adj, visited, st);
        }
    }
    st.push(i);
}


vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
     // create adjacenecy list
    unordered_map<int, list<int>> adj;
    for(int i = 0; i< e; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
    }
    // now we have our list ready
    vector<bool> visited(v);
    stack<int> st;
    for(int i =0; i<v; i++){
        if(!visited[i]){
            dfs(i,adj, visited, st);
        }
    }
    
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
    
}