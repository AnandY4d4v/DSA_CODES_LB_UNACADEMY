#include<iostream>
#include<queue>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
        unordered_map<int,list<int> >adjList;

        void edge(int u,int v,bool direction){
            adjList[u].push_back(v);

            if(direction == 0){

            //direction 0 -> undirected graph
            //direction 1 -> directed graph
            adjList[v].push_back(u);

            }
        }
        void print(){
            for(auto i:adjList){
                cout<<i.first<<"->";
                for(auto j:i.second)
                    cout<<j<<",";
            cout<<endl;
            }
        }

        // detect cycle in undirect graph

        bool DetectCyleByBFS(int src,unordered_map<int,bool>&visited,unordered_map<int,list<int> >&adjList){
            unordered_map<int,bool>parent;
            parent[src] = -1;
            visited[src] = 1;
            
            queue<int>q;
            q.push(src);
            

            while(!q.empty()){
                int front = q.front();
                q.pop();
                for(auto neighbour:adjList[front]){
                    
                    if(visited[neighbour]==true && neighbour!= parent[front]){
                        return true;
                    }
                    else if(!visited[neighbour]){
                        q.push(neighbour);
                        visited[neighbour]=1;
                        parent[neighbour] = front;
                    }
                }
                
            }
            return false;
        }
        string isCyclic(int n, unordered_map<int,list<int> >adjList) {
        unordered_map<int,bool>vis;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                bool ans = DetectCyleByBFS(i,vis,adjList);
                if(ans)
                    return "true";
            }
        } 
        return "false";
    }
};
int main(){

    graph g;
    g.edge(1,2,0);
    g.edge(2,3,0);
    g.edge(4,5,0);
    g.edge(5,6,0);
    g.edge(6,8,0);
    g.edge(8,7,0);
    g.edge(7,5,0);
    g.edge(8,9,0);


    g.print();
    int n = 10;

    unordered_map<int,list<int> >adjList;
    cout<<g.isCyclic(n,adjList);
    
    return 0;
}
