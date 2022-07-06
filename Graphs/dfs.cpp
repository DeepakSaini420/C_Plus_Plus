#include<iostream>
#include<list>
#include<vector>
#include<queue>

class Graph{
	int V{0};
	list<int> *l;
	public:
		Graph(int V){
			this->V=V;
			l = new list<int>[V];
		}
		void addEdge(int i,int j,bool undir=true){
			l[i].push_back(j);
			if(undir){
				l[j].push_back(i);
			}
		}
		void dfs_hepler(int node,vector<int> visited){
			visited[src]=true;
			cout << node<<" ";
			for(auto nbr:l[node]){
				if(!visited[node]){
					dfs_helper(nbr,visited);
				}
			}
		}
		void dfs(int src){
			vector<int> visited(V,false);
			dfs_helper(src,visited);
		}
};

int main(){
	return 0;
}
