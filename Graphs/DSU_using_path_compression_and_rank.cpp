#include <iostream>

class DSU{
	int *parent;
	int *rank;
	public:
		DSU(int V){
			parent = new int[V]{-1};
			rank = new int[V]{1};
		}
		int find(int i){
			if(parent[i]==-1){
				return i;
			}
			return parent[i]=find(parent[i]);
		}
		int union(int x,int y){
			int s1 = find(x);
			int s2 = find(y);
			if(s1!=s2){
				if(rank[s1]>=rank[s2]){
					parent[s2]=s1;
					rank[s1]+=rank[s2];
				}else{
					parent[s1]=s2;
					rank[s2]+=rank[s1];
				}
			}
		}
};

int main(){
	return 0;
}
