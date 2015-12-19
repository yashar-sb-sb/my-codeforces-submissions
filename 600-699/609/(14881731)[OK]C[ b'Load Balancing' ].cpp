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
#include<fstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[(int)1e5];

int main()
{
ios_base::sync_with_stdio(0);
	LL s = 0, n, res = 0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
		s += A[i];
	}
	int k = s%n;
	s = s/n;
	int l = 0, r = n -1;
	int c = 0;
	for(int i = 0; i < n; ++i)
	{
		if(A[i] > s)
		{
			++c;
			res += A[i] - s;
		}
	}
	cout<<res-(LL)min(c,k);
	return 0;
}
