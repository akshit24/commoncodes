
// Union-Find
//With Path Compression

include <iostream>

using namespace std;
int id[101];
int sz[101]

void init(int n){
	for (int i = 0 ; i < n ; i++){
		id[i] = i;
		sz[i] = 1;
	}
}

int root (int i){
	while (i != id[i])
	{
		id[i] = id[id[i]];
		i = id[i];
	}	
	return i;
}

bool isconnected (int p , int q){
	return (root[p] == root[q]);
}

void union (int p , int q){
	int i = root[p];
	int j = root[q];
	if(sz[i] < sz[j]){
		id[i] = j;
		sz[j] += sz[i];
	}
	else{
		id[j] = i;
		sz[i] += sz[j];
	}
}
int main()
{
	init(10);
	
	return 0;
}
