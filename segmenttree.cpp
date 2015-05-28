#include <iostream>
#include <cstdio>

using namespace std;

int tree [20];

void build (int *arr, int l, int r, int idx, int *tree){
	if(l ==r)
	{
		tree[idx] = l;
	}
	else
	{	
		int mid = (l+r)/2;
		int leftidx = (2*idx) ; int rightidx = (2*idx) + 1;
		build (arr, l, mid, leftidx, tree);
		build (arr, mid+1, r, rightidx, tree);
		int lcontent = tree[leftidx]; int rcontent = tree[rightidx];
		int lvalue = arr[lcontent]; int rvalue = arr[rcontent];
		tree[idx] = lvalue < rvalue ? lcontent : rcontent;
	}

}
int query(int *arr,int idx, int l, int r, int i, int j){
	if (i>r || j<l)
		return -1;
	if (l>=i && r<=j )
		return tree[idx];
	int mid = (l+r)/2;
	int p1 = query(arr, 2*idx, l, mid, i, j);
	int p2 = query(arr, 2*idx+1, mid+1, r, i, j);
	if(p1 == -1) return p2;
	if(p2 == -1) return p1;
	return (arr[p1]<arr[p2] ? arr[p1]:arr[p2]);

}
int main()
{
	int arr[] = {8,7,3,9,5,1,10};
	build(arr,0,6,1,tree);
	int i,j;
	cin>>i>>j;
	cout<<query(arr,1,0,6,i,j);

	return 0;

}
