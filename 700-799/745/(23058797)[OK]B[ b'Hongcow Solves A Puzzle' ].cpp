#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int n,m,imi=5000,ima=-1,jmi=5000,jma=-1,c=0;
	cin>>n>>m;
	char inp;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>inp;
			if(inp == 'X')
			{
				++c;
				imi = min(i,imi);
				jmi = min(j,jmi);
				ima = max(i,ima);
				jma = max(j,jma);
			}
		}
	}
	if((1+ima-imi)*(1+jma-jmi)==c)cout<<"YES";
	else cout<<"NO";
	cout<<endl;
	return 0;
}