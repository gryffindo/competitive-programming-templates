#include<bits/stdc++.h>
using namespace std;

class Graph {
	public: 
		map<int, bool>marked;
		map<int, list<int>> adj;

		void addEdge(int v, int w);
		void DFS(int v);  
};

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}

void Graph::DFS(int v) {
	marked[v] = true;
	cout << v <<" ";

	list<int>::iterator i;
	for( i = adj[v].begin(); i!=adj[v].end(); ++i) if(!marked[*i]) DFS(*i);
}

int main() {
	// Just need to enter the driver codes :3	
	return 0;
}