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

int A[3001];

int main()
{
ios_base::sync_with_stdio(0);
	int n, res=0;
	cin>>n;
	stack<pii> s;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	sort(A+1,A+n+1);
	s.push(make_pair<int,int>(A[n]+1,1e9));
	for(int i = n; i > 0; --i)
	{
		if(A[i] == A[i-1])
		{
			res += s.top().first - A[i];
			++s.top().first;
			if(s.top().first == s.top().second)s.pop();
		}
		else if(A[i] > A[i-1] + 1)
			s.push(make_pair<int,int>(A[i-1]+1,A[i]));
	}
	cout<<res;
	return 0;
}
