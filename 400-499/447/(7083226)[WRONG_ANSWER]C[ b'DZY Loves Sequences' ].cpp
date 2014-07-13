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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100001];

int main()
{
ios_base::sync_with_stdio(0);
	int n,ma=1;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	A[n] = 1e9+1;
	for(int i = 1, cur = 0, curr = 0; i < n; ++i)
	{
		if(A[i]<=A[i-1])
		{
			if(A[i-1]+1<A[i+1])
			{
				curr = cur;
			}
			else
			{
				ma = max(ma, i - curr +1);
				curr = i;
			}
			cur = i;
		}
		ma = max(ma, i - curr + 1+(curr==cur));
	}
	cout<<ma;
	return 0;
}