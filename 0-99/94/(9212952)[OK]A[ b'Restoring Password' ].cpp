#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>
#include<cstdio>
#include<list>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string s,A[10];
	cin>>s;
	int j;
	for(int i = 0; i < 10; ++i)cin>>A[i];
	for(int i = 0; i < 8; ++i)
	{
		for(int l = 0; l < 10; ++l)
		{
			for(j = 0; j < 10 && s[10*i+j] == A[l][j]; ++j);
			if(j == 10)cout<<l;
		}
	}
	return 0;
}
