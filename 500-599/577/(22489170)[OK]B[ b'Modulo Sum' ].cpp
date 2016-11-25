#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int A[1000];
bool F[1000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,size,inp,ns;
	vector<int> tmp;
	cin>>n>>m;
	for(size = 0; size < m; ++size)A[size] = size;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		inp = inp%m;
		int ns = 0;
		for(int j=0; j < size; ++j)
		{
			if(inp == A[j] || F[(m+A[j]-inp)%m])tmp.push_back(A[j]);
			else A[ns++] = A[j];
		}
		for(auto p:tmp)F[p] = true;
		size = ns;
	}
	cout<<(F[0]?"YES\n":"NO\n");
	return 0;
}