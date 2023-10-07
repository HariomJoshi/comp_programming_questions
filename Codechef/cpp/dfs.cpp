#include<iostream>
#include<unordered_map>
#include<vector>
#include<set>

using namespace std;


void makeAdjList(unordered_map<int, set<int>> &adjList, vector<vector<int>> &edges){
    for(auto i: edges){
        int u = i[0];
        int v = i[1];
        
        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void printAdjList(unordered_map<int, set<int>> adjList){
    for(auto i: adjList){
        cout<< i.first<< "  -> ";
        for(auto j: i.second){
            cout<< j << " ";
        }
        cout<< endl;
    }
}

void dfs(int i, unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &temp){
    visited[i] = true;
    temp.push_back(i);
    for(auto j: adjList[i]){
        if(!visited[j]){
            dfs(j, adjList, visited, temp);
        }

    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int, set<int>> adjList;  // we are using set because it stores elements in sorted order
    unordered_map<int, bool> visited;
    
    vector<vector<int>> ans;
    makeAdjList(adjList,edges);

    for(int i =0; i<V; i++){
        
        if(!visited[i]){
            vector<int> temp;
            dfs(i, adjList, visited, temp);
            ans.push_back(temp);   
        }
        
    }
    return ans;
    
}