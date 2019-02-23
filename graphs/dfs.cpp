/*
Depth First Search for a graph.

Returns the path from a graph of nodes and vertices starting from
a specific node.

*/


#include <iostream>
#include <vector>
#include <stack>

using namespace std;

typedef vector< vector<int> > graph;

vector<int> dfs(graph G, int start){
    
    vector<int> visited(G.size(),0);
    vector<int> path;
    stack<int> nodes;
    int current;
    
    nodes.push(start);
    visited[start] = 1;
    
    while(!nodes.empty()){
        
        current = nodes.top();
        path.push_back(current);
        nodes.pop();
        
        for(int i=0;i<G[current].size();i++){
            
            if(visited[G[current][i]]==1){
                
                continue;
                
            }else{
                
                nodes.push(G[current][i]);
                visited[G[current][i]] = 1;
                
            }
            
        }
        
    }
    
    return path;
}


int main(){
    
    graph G = {{1,2},{2,4},{3,0},{3},{}};
    vector<int> path = dfs(G,2);
    int s = path.size();
    
    for(int i=0;i<s;i++){
        
        cout << path[i] << ' ';
        
    }
    
    return 0;
}