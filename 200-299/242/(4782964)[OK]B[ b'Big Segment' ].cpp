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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,l,r,ma=-1,index;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].first>>A[i].second;
	}
	r = A[0].second;
	l = A[0].first;
	for(int i = 0; i < n; ++i)
	{
		if(r<A[i].second)r=A[i].second;
		if(l>A[i].first)l=A[i].first;
		if(ma<A[i].second-A[i].first)
		{
			index = i;
			ma = A[i].second-A[i].first;
		}
	}
	if(r>A[index].second||l<A[index].first)index = -2;
	cout<<++index;
	return 0;
}