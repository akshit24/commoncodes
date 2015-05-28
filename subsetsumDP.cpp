#include <iostream>
#include <cstdio>

using namespace std;

bool subset[512][512];
bool isSubset(int *arr, int n , int S ){
	for (int i = 0 ; i <= n ; i++)
		subset[0][i] = true;
	for (int i = 1 ; i <= n ; i++)
		subset[i][0] = false;
	for (int i = 1 ; i <=S ;i++){
		for (int j = 1 ; j <=n ; j++){
			subset[i][j] = subset[i][j-1];
			if (i >= arr[j-1])
				subset[i][j] = subset[i][j] || subset[i-arr[j-1]][j-1];
		}
	}
	return subset[S][n];
	
}
int main()
{
	int arr[]={3,34,4,12,5,2};
	cout<<"ans = "<<isSubset(arr, 6 , 14);

	return 0;
}
