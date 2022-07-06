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
		void bfs(int src){
			vector<bool> visited(V,false);
			queue<int> q;
			visited[src]=true;
			q.push(src);
			while(!q.empty()){
				int node = q.front();
				q.pop();
				for(auto nbr:l[node]){
					if(!visited[nbr]){
						q.push(nbr);
					}
				}
			}
		}
};

int main(){
	return 0;
}
