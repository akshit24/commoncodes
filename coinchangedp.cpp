#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;
int C[101];	

int noofcoins(int P,vector <int>& v)
{
	memset(C,INT_MAX,sizeof(C));
	C[0]=0;
	int n=v.size();
	for(int i=1;i<=P;i++)
	{
		int mn=INT_MAX;
		for(int j=0;j<n;j++){
			if(v[j]<=i && C[i-v[j]] < mn)
			{
				mn=C[i-v[j]];
				C[i]=mn;
			}
		}
		C[i]+=1;
	}	
	return C[P];
	
}
int main()
{
 	vector <int > v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	int ans = noofcoins(11,v);
	cout << ans<<endl;
	return 0;
}
