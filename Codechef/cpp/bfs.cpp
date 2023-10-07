#include <bits/stdc++.h> 
#include<unordered_map>
#include<vector>
#include<queue>
#include<list>
#include<set>


using namespace std;

void prepareAdjList(unordered_map<int, set<int>> & adjList, vector<pair<int, int>> &edges){
    for(int i =0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        
        adjList[u].insert(v);
        adjList[v].insert(u);
        
    }
}


void printAdjList(unordered_map<int, set<int>> adjList){
    for(auto i: adjList){
        cout<< i.first<< " ";
        for(auto j: i.second){
            cout<< j << " ";
        }
        cout<< endl;
    }
}

void bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node){
    
    
    queue<int> q;
    q.push(node);
    visited[node] = true;
    
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        // store front node into ans
        
        ans.push_back(frontNode);
        // traverese all neighbours of front node
        for(auto i: adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]= true;
            }
        }
    }
}


vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    
    unordered_map<int, set<int>> adjList;
    unordered_map<int, bool> visited;
    vector<int> ans;
    // preparing adjacency list
    
    prepareAdjList(adjList, edges);
//     printAdjList(adjList);
    
    // traverse all components of a graph
    for(int i =0; i<vertex; i++){
        if(!visited[i]){
            bfs(adjList, visited, ans, i);
        }
    }
    
    return ans;  
    
}



