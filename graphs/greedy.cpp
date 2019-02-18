/*
Travel Salemesman using the greedy Algorithm

Input: 

grapĥ: every index is a node, graph[index] consists of the neighbours of the node in that index and the corresponding distance
start: index of start


Return:
path: vector containjing the order of the nodes


*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector< vector< vector<int> > > graph;

vector<int> greedy(graph g, int start){
    
    vector<int> path;
    path.push_back(start);
    int current_node = start;
    
    for(int i=0;i<g.size()-1;i++){
        
        int c = 10000;
        int next_node;
        
        for(int j=0;j<g[current_node].size();j++){
            vector<int>::iterator d = find(path.begin(),path.end(),g[current_node][j][0]);
            
            if (d == path.end()){
                
                if(g[current_node][j][1]<c){
                    
                    c = g[current_node][j][1];
                    next_node = g[current_node][j][0];
                    
                }
                
            }
            
        }
        
        current_node = next_node;
        path.push_back(current_node);
        
    }
    
    return path;
    
}

int main(){
    
    cout << "Start!\n";
    graph g = {{{1,4},{2,3},{3,10}},{{0,4},{2,5},{3,2}},{{0,3},{1,5},{3,6}},{{0,10},{1,2},{2,6}}};
    vector<int> res = greedy(g,0);
    
    for(int i=0;i<res.size();i++){
        
        cout << res[i] << ' ';
        
    }
    
    return 0;
    
}