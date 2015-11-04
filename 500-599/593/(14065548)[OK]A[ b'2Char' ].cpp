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
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[26][26];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		map<int,int> m;
		for(int i = 0; i < s.size(); ++i)
		{
			++m[s[i]-'a'];
		}
		if(m.size()==1)
		{
			for(int i = 0; i < 26; ++i)
			{
				if(i!=m.begin()->first)
				{
					A[i][m.begin()->first]+=m.begin()->second;
					A[m.begin()->first][i]+=m.begin()->second;
				}
			}
		}
		else if(m.size()==2)
		{
				A[m.rbegin()->first][m.begin()->first]+=m.begin()->second+m.rbegin()->second;
				A[m.begin()->first][m.rbegin()->first]+=m.begin()->second+m.rbegin()->second;
		}
	}
	int m=0;
	for(int i = 0; i < 26; ++i)
		for(int j = 0; j < 26; ++j)
			if(A[i][j]>m)m=A[i][j];
	cout<<m;
	return 0;
}
