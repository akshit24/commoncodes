#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

int LCS[512][512];
int findlcs(string s1,string s2)
{
	int m=s1.size();
	int n=s2.size();
	for (int i = 0 ; i <= m ; i++){
		for (int j = 0 ; j <= n ; j++){
			if (i == 0 || j == 0)
				LCS[i][j] = 0;
			else if(s1[i-1] == s2[j-1])
				LCS[i][j] = 1 + LCS[i-1][j-1];
			else
				LCS[i][j] = max(LCS[i-1][j] , LCS[i][j-1]);
		}
	}
	return LCS[m][n];
}
int main()
{
	string s1="AGCAT";
	string s2="GAC";
	int ans=findlcs(s1,s2);
	cout << ans <<endl;
	return 0;

}
