#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;

typedef pair <int, int> pii;
typedef vector <pii> vpii;
typedef vector <vpii> vvpii;


int main()
{
	vvpii graph;
	graph.resize(7);

	/*Sample Graph*/

	graph[1].push_back(pii(10,2)); graph[1].push_back(pii(5,4));
	graph[2].push_back(pii(1,3)); graph[2].push_back(pii(2,4));
	graph[3].push_back(pii(4,5));
	graph[4].push_back(pii(3,2)); graph[4].push_back(pii(9,3)); graph[4].push_back(pii(2,5));
	graph[5].push_back(pii(7,1)); graph[5].push_back(pii(3,6));

	/*Sample Graph ends*/

	int d[6]; int src; int parent[6];
	memset(d,1000000,sizeof(d));
	cin>>src;
	d[src] = 0;parent[src] = NULL;
	priority_queue <pii,vpii,greater<pii> > Q;
	Q.push(pii(0,1));
	while(!Q.empty()){
		pii tmp = Q.top();
		Q.pop();
		int w = tmp.first; int v = tmp.second;
		for(int i = 0 ; i < graph[v].size(); i++){
			int w2 = graph[v][i].first; int v2 = graph[v][i].second;
			if(d[v2] > d[v] + w2){
				d[v2] = d[v]+w2;
				parent[v2] = v ;
				Q.push(pii(d[v2],v2));
			}
		}

	}
	/*for(int i = 1 ; i <= 5 ; i++)
		cout<<"d["<<i<<"] = "<<d[i]<<endl;
	for(int i = 1 ; i <= 5 ; i++)
		cout<<"parent["<<i<<"] = "<<parent[i]<<endl;
	*/
	return 0;
}
