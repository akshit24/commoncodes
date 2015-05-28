#include <iostream>
#include <cstdio>

using namespace std; 

bool isSubsetsum( int *arr , int n , int S){
	if (S == 0)
		return true;
	if (n == 0 && S != 0)
		return false;
	return (isSubsetsum(arr, n-1, S) || isSubsetsum(arr, n-1, S-arr[n-1]));

}
int main()
{
	int arr[] = {0,3,7,2,6};
	cout<<"ans = "<<isSubsetsum (arr, 5, 4);
	return 0;
}
