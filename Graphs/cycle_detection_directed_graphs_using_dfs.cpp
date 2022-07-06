#include <iostream>
#include <vector>
#include <list>

class Graph{
	int V{0};
	list<int> *l;
	public:
		Graph(int V){
			this->V=V;
			l=new list<int>[V];
		}
		void addEdge(int i,int j){
			l[i].push_back(j);
		}
		bool dfs_helper(int node,vector<bool> visited,vector<bool> stack){
			visited[node]=true;
			stack[node]=true;
			for(auto nbrs:l[node]){
				if(stack[nbr]){
					return true;
				}else if(visited[nbr]==false){
					bool nbrFoundCycle = dfs_helper(nbr,visited,stack);
					if(nbrFoundCycle){
						return true;
					}
				}
			}
			stack[node]=false;
			return false;
		}
		bool cycle_detection(){
			vector<bool> visited(V,false);
			vector<bool> stack(V,false);
			
			for(int i=0;i<V;i++){
				if(visited[i]==false){
					if(dfs_helper(i,visited,stack)){
						return true;
					}
				}
			}
			
			return false;
		}
};

int main(){
	return 0;
}
