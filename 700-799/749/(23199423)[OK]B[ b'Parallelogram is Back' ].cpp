#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[3];

int main()
{
	ios_base::sync_with_stdio(0);
	for(int i = 0; i < 3; ++i)cin>>A[i].first>>A[i].second;
	cout<<3<<endl;
	for(int i = 0; i < 3; ++i)
	{
		pii a = A[i];
		a.first *= -1;
		a.second *= -1;
		for(int j = 0; j < 3; ++j)if(j!=i)a.first+=A[j].first, a.second+=A[j].second;
		cout<<a.first<<' '<<a.second<<endl;
	}
	return 0;
}