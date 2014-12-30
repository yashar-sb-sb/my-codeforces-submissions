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

int A[501], F[501], B[1000];
vector<int> s,st;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,t;
	cin>>n>>m;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	for(int i = 0; i < m; ++i)
	{
		cin>>t;
		B[i] = A[t];
	}
	for(int i = 0; i < m; ++i)
	{
		if(!F[B[i]])
		{
			s.push_back(B[i]);
		}
	}
	reverse(s.begin(),s.end());
	n = 0;
	for(int i = 0; i < m; ++i)
	{
		t = 0;
		while(s.back()!=B[i])
		{
			st.push_back(s.back());
			t+=s.back();
			s.pop_back();
		}
		n += t;
		t = s.back();
		s.pop_back();
		while(!st.empty())
		{
			s.push_back(st.back());
			st.pop_back();
		}
		s.push_back(t);
	}
	cout<<n;
	return 0;
}
