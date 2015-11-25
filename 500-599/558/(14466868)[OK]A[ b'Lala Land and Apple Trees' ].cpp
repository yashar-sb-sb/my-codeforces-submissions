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

vector<pii> L,R;

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(a<0)
		{
			L.push_back(make_pair<int,int>(-a,b));
		}
		else R.push_back(make_pair<int,int>(a,b));
	}
	sort(L.begin(),L.end());
	sort(R.begin(),R.end());
	LL res = 0;
	for(int i = 0; i < L.size() && i < R.size()+1; ++i)res+=L[i].second;
	for(int i = 0; i < R.size() && i < L.size()+1; ++i)res+=R[i].second;
	cout<<res;
	return 0;
}
