#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Graph {
	int V;
	list<int> *adj;
	public: 
		Graph(int V);
		void addEdge(int v, int w); // cost or weight and vertex
		void BFS(int s);
};

Graph::Graph(int V) {
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}

void Graph::BFS(int s) {
	bool *marked = new bool[V];
	for(int i = 0;i < V; i++) marked[i] = false;
	list<int> queue;
	marked[s] = true;
	queue.push_back(s);

	list<int>::iterator i;

	while(!queue.empty()) {
		s = queue.front();
		cout << s << " ";
		queue.pop_front();
		for(i = adj[s].begin(); i != adj[s].end(); ++i) {
			if(!marked[*i]) {
				marked[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}

int main() {
	// Just need to enter the driver codes :3
	return 0;
}