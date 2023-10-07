#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;
template <typename T>
class graph{
    public:
    unordered_map<T, list<T>> adj;

    void addEdge(T v , T u, bool direction){
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph

        // create and edge from u to v
        adj[u].push_back(v);
        if(!direction){
            adj[v].push_back(u);
        }
    }

    void printAdjList() {
        for(auto i: adj){
            cout<< i.first<< "-> ";
            for(auto j: i.second){
                cout<< j << " ";
            }
            cout<< endl;
        }
    }
    
};


 

int main(){
    int n; 
    cout<< "Enter the number of nodes: "<< endl;
    cin>>n;


    int m;
    cout<< "Enter the number of edges: "<< endl;
    cin>> m;

    graph<int> g;


    for(int i =0; i<n; i++){
        int u, v;
        cin>> u>> v;
        // creating an undirected graph
        g.addEdge(u, v, 0);
    }

    // printing the graph
    g.printAdjList();

}