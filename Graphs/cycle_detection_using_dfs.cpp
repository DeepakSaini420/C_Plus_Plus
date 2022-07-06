#include<iostream>
#include<list>
#include<vector>

class Graph{
	int V{0};
	list<int> *l;
	public:
		Graph(int V){
			this->V=V;
			l=new list<int>[V];
		}
		void addEdge(int i,int j,bool undir=true){
			l[i].push_back(j);
			if(undir){
				l[j].push_back(i);
			}
		}
		
		bool dfs_helper(int node,vector<int> visited,int parent){
			visited[node]=true;
			
			for(auto nbrs:l[node]){
				if(!visited[node]){
					bool canContainCycle = dfs_helper(nbrs,visited,node);
					if(canContainCycle){
						return true;
					}
				}else if(nbrs!=parent){
					return true;
				}
			}
		}
		
		bool cycle_detection(int src){
			vector<int> visited(V,false);
			return dfs_helper(src,visited,0);
		}
};

int main(){
	return 0;
}
