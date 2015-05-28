// Quick- Find 
//Eager Approach

include <iostream>

using namespace std;
int id[101];

void init(int n){
	for (int i = 0 ; i < n ; i++){
		id[i] = i;
	}
}

bool isconnected (int p , int q){
	return (id[p] == id[q]);
}

void union (int p , int q){
	int pid = id[p];
	int qid = id[q];
	for(int i = 0 i < n ; i++){
		if(id[i] == pid)
			id[i] = qid;
	}
}
int main()
{
	init(10);
	
	return 0;
}
