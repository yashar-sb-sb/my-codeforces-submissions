#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[10];

int main()
{
ios_base::sync_with_stdio(0);
	int r,c,n,k,res=0;
	cin>>r>>c>>n>>k;
	for(int i = 0; i < n; ++i)cin>>A[i].first>>A[i].second;
	for(int i1 = 1; i1 <= r; ++i1)
	{
		for(int j1 = 1; j1 <= c; ++j1)
		{
			
			for(int i2 = i1; i2 <= r; ++i2)
			{
				for(int j2 = j1; j2 <= c; ++j2)
				{
					int su = 0;
					for(int i = 0; i < n; ++i)
					{
						if(A[i].first>=i1 && A[i].first<=i2 && A[i].second>=j1 && A[i].second<=j2)++su;
					}
					if(su>=k)++res;
				}
			}
		}
	}
	cout<<res<<endl;
	return 0;
}