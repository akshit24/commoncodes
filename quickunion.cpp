// Quick- Union
//Lazy Approach

include <iostream>

using namespace std;
int id[101];

void init(int n){
	for (int i = 0 ; i < n ; i++){
		id[i] = i;
	}
}

int root (int i){
	while (i != id[i])
		i = id[i];
	return i;
}

bool isconnected (int p , int q){
	return (root[p] == root[q]);
}

void union (int p , int q){
	int i = root[p];
	int j = root[q];
	id[i] = j;
}
int main()
{
	init(10);
	
	return 0;
}
