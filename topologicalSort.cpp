#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
#include <cstring>

using namespace std;

bool visited[7];
vector <int> graph[7];
stack <int> stk;
void dfs(int u){
	visited[u] = true;
	for(int i = 0 ; i < graph[u].size(); i++){
		if(!visited[graph[u][i]]){
			dfs(graph[u][i]);
		}
	}
	stk.push(u);
}

int main(){
	memset(visited,false, sizeof(visited));
	/*sample graph*/
	graph[0].push_back(1);graph[0].push_back(2);graph[0].push_back(5);
	graph[1].push_back(4);
	graph[3].push_back(2);graph[3].push_back(4);graph[3].push_back(5);graph[3].push_back(6);
	graph[5].push_back(2);
	graph[6].push_back(0);graph[6].push_back(4);

	/*sample graph ends*/
	for(int i = 0 ; i < 7 ; i++){
		if(!visited[i])
			dfs(i);
	}
	while(!stk.empty()){
		cout<<stk.top()<<" ";
		stk.pop();
	}

	return 0;
}
