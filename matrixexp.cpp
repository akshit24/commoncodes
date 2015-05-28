#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

typedef vector <vector <int> > mat;
mat mul(mat a , mat b){
	mat c;
	c.resize(2,vector<int>(2,0));
	for (int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			c[i][j] = 0;
			for(int k = 0 ; k < 2 ; k++){
				c[i][j] +=( a[i][k]*b[k][j]);
			}
		}
	}
	return c;
}
mat power(mat a , int k){
	if(k == 1)
		return a;
	if(!(k%2))
		return (mul(power(a,k/2) , power(a,k/2)));
	if(k%2)
		return (mul(power(a,k/2) , power(a,(k/2)+1)));
}

int main(){
	mat M;
	M.resize(2 , vector <int>(2,0) );
	M[0][0] = 1; M[0][1] = 1;
	M[1][0] = 1; M[1][1] = 0;
	M = power(M,4);
	int ans  = M[0][1];
	cout<<"fib = "<<ans<<endl;
	
	return 0;
}
