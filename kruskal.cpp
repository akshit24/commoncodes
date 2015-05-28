#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

typedef pair <int,int> pii;
typedef vector <pii> vpii;

vpii graph[100];
int id[100];
int sz[100];
void init(int n){
	for(int i = 0 ; i < n ; i++)
	{
		id[i] = i;
		sz[i] = 1;
	}
}

int find(int p){
	while(p!=id[p]){
		p = id[p];
	}
	return p;
}

bool conncted(int p , int q){
	return (find(p) == find(q));
}

void join(int p , int q){
	int proot = find(p);
	int qroot = find(q);
	id[proot] = qroot;
}

struct Edge{
	int weight;
	int either;
	int other;
};
struct comparator{
	bool operator()(const Edge &a, const Edge &b){
		return (a.weight > b.weight);
	}
};
int main(){
	priority_queue<Edge,vector<Edge>,comparator> Q;
	//sample graph
	Edge edge[8];
	graph[0].push_back(pii(26,2));graph[0].push_back(pii(38,4));graph[0].push_back(pii(58,6));graph[0].push_back(pii(16,7));
	graph[1].push_back(pii(36,2));graph[1].push_back(pii(29,3));graph[1].push_back(pii(32,5));graph[1].push_back(pii(19,7));
	graph[2].push_back(pii(26,0));graph[2].push_back(pii(36,1));graph[2].push_back(pii(17,3));graph[2].push_back(pii(40,6));graph[2].push_back(pii(34,7));
	graph[3].push_back(pii(29,1));graph[3].push_back(pii(17,2));graph[3].push_back(pii(52,6));
	graph[4].push_back(pii(38,0));graph[4].push_back(pii(35,5));graph[4].push_back(pii(93,6));graph[4].push_back(pii(37,7));
	graph[5].push_back(pii(32,1));graph[5].push_back(pii(35,4));graph[5].push_back(pii(28,7));
	graph[6].push_back(pii(58,0));graph[6].push_back(pii(40,2));graph[6].push_back(pii(52,3));graph[6].push_back(pii(93,4));
	graph[7].push_back(pii(16,0));graph[7].push_back(pii(19,1));graph[7].push_back(pii(34,2));graph[7].push_back(pii(37,4));graph[7].push_back(pii(28,5));
	
	//sample graph ends
	edge[0].either = 0; edge[0].other = 2; edge[0].weight = 26; edge[0].either = 0; edge[0].other = 4; edge[0].weight = 38;
	edge[0].either = 0; edge[0].other = 6; edge[0].weight = 58; edge[0].either = 0; edge[0].other = 7; edge[0].weight = 16;


	Q.push()	
	return 0;
}
