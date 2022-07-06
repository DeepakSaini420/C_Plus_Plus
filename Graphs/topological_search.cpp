#include <iostream>
#include <list>
#include <vector>
#include <queue>

class Graph{
	int V{0};
	list<int> *l;
	public: 
		Graph(int V){
			this->V = V;
			l = new list<int>[V];
		}
		void addEdge(int x,int y){
			l[x].push_back(y);
		}
		void topological_sort(){
			vector<int> indegree(V,0);
			for(int i=0;i<V;i++){
				for(auto nbr:l[i]){
					indegree[nbr]++;
				}
			}
			queue<int> q;
			for(int i=0;i<V;i++){
				if(indegree[i]==0){
					q.push(i);
				}
			}
			while(!q.empty()){
				int node = q.front();
				cout << node <<" ";
				for(auto nbr:l[node]){
					indegree[nbr]--;
					if(indegree[nbr]==0){
						q.push(nbr);
					}
				}
			}
		}
};

int main(){
	Graph g(5);
	return 0;	
}




