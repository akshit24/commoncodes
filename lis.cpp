#include <iostream>
#include <cstdio>

using namespace std;
int lis[101];
int arr[101];

int findLIS (int *arr, int n){
	int mx = 0;
	for (int i = 0 ; i < n ; i++){
		lis[i] = 1;
	}
	for (int i = 1 ; i < n ; i++){
		for (int j = 0 ; j < i ; j++){
			if (arr[j] < arr[i] && lis[i] < lis[j]+1)
				lis[i] = lis[j] + 1;
		}
	}
	for (int i = 0 ; i < n ; i++){
		if(mx < lis[i])
			mx = lis[i];
	}
	return mx;
}

int main()
{
	int arr[] = {29,22,25,33};
	int ans = findLIS(arr,4);
	cout<<"LIS = "<<ans<<endl;
	return 0;
}
