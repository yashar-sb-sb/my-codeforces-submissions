#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int C[int(1e5+1)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,a[3];
	cin>>n>>m;
	while(m--)
	{
		set<int> s;
		for(int i = 0; i < 3; ++i)cin>>a[i];
		for(int i = 1; i < 4; ++i)s.insert(i);
		for(int i = 0; i < 3; ++i)s.erase(C[a[i]]);
		for(int i = 0; i < 3; ++i)
		{
			if(!C[a[i]])
			{
				C[a[i]] = *s.begin();
				s.erase(s.begin());
			}
		}
	}
	for(int i = 1; i <= n; ++i)cout<<C[i]<<' ';cout<<endl;
	return 0;
}
