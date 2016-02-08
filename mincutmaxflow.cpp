#include <iostream>
#include <vector>

using namespace std;

class FlowEdge{
	int u;
	int v;
	int capacity;
	FlowEdge(int u, int v, int capacity){
		this.u = u;
		this.v = v;
		this.capacity = capacity;
	}
	int from(){return u;}
	int to(){return v;}
	int capacity(){return capacity;}
	int flow(){return flow;}
	int other(int vertex){
		if(vertex == u)return v;
		else
			return u;
	}

int residualCapacityTo(int vertex){
	if(vertex == u) return flow;
	if(vertex == v) return capacity - flow;
}

void addResidualFlowTo(int vertex, int delta){
	if(vertex == u)
		flow-=(delta);
	if(vertex == v)
		flow+=delta;
}
}

public class FlowNetwork{
	int V;
	vector <FlowEdge> graph[V];
	FlowNetwork(int V){
		this.V = V;
	}

	void addEdge(FlowEdge e){
		int u = e.from();
		int v = e.to();
		graph[u].add(e);
		graph[v].add(e);
	}
}

public Fulkerson{
	bool marked[V];
	FlowEdge edgeTo[V];
	int value;
	Fulkerson(FlowNetwork G, int s, int t){
		while(hasAugmentingPaths(G,s,t)){
			int bottle = 1000000;
			for(int i = s ; i!= t ; i = edgeTo[i].other(i))
				bottle = min(bottle,edgeTo[i].residualCapacityTo(i));
			for(int i = s ; i!=t ; i=edgeTo[i].other(i)){
				edgeTo[i].addResidualFlowTo(i,bottle);
			}
			value+=bottle;
		}
	}
	bool hasAugmentingPaths(FlowNetwork G, int s, int t){
		
	}
}
int main(){

	return 0;
}
