#include <iostream>
#include <cstdio>

using namespace std;

int pivot (int *arr, int lo, int hi){
	if(lo<hi){
	int mid = (lo+hi)/2;
	if(arr[lo] == arr[mid] || arr[hi] == arr[mid]) return mid;
	if(arr[lo] > arr[mid])
		return pivot(arr,lo,mid);
	else if(arr[lo] < arr[mid])
		return pivot(arr,mid+1,hi);
	return -1;
	}
	
}
int main ()
{
	int arr[] = {4,5,1,2,3};
	int ans = pivot(arr,0,4);
	cout<<"idx = "<<ans<<endl;
	return 0;
}
