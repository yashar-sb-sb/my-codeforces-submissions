#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool A[501][501];
int D[501];
multiset<int> ms;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,q;
	cin>>n>>m>>q;
	for(int i = 1; i <= n; ++i)
	{
		ms.insert(0);
		for(int j = 1; j <= m; ++j)
		{
			cin>>A[i][j];
			if(A[i][j] == 1)
			{
				ms.erase(ms.find(D[i]));
				++D[i];
				ms.insert(D[i]);
			}
		}
	}
	int a,b;
	while(q--)
	{
		cin>>a>>b;
		ms.erase(ms.find(D[a]));
		if(A[a][b])--D[a];
		else ++D[a];
		A[a][b] = !A[a][b];
		ms.insert(D[a]);
		cout<<*ms.rbegin()<<'\n';
	}
	return 0;
} 
