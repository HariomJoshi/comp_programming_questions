#include<vector>
#include<iostream>

using namespace std;
class Solution {
private:
    bool isCyclicDFS(int src, bool visited[], vector<int> adj[], bool dfsVisited[]){
        visited[src] = true;
        dfsVisited[src] = true;
        for(auto i: adj[src]){
            if(!visited[i]){
                bool cycleDetected = isCyclicDFS(i, visited, adj, dfsVisited);
                if(cycleDetected){
                    return true;
                }
                
                
            }else if(dfsVisited[i]){
                return true;
            }
          
        }
        
        dfsVisited[src] = false;
        return false;
      
    }
public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        bool visited[V];
        bool dfsVisited[V];
        for(int i =0; i<V; i++){
            
            if(!visited[i]){
                bool ans = isCyclicDFS(i, visited, adj, dfsVisited);   
                if(ans){
                    return true;
                }
            }
                
        }
        return false;
    }
};

int main(){
    Solution s;
    int V, E;
    cin>> V>> E;
    // vector<int> edges[E];
    vector<int> adj[V];
    for(int i = 0; i< E; i++){
        int u, v;
        cin>> u>> v;
        adj[u].push_back(v);
    }

    // we have our adjacency list ready
    cout<< s.isCyclic(V, adj)<< endl;

    return 0;
}