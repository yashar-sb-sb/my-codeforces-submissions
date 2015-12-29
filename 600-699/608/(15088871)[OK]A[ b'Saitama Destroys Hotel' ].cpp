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

int A[1002];

int main()
{
ios_base::sync_with_stdio(0);
	int n, s, a, b;
	cin>> n >> s;
	for(int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		A[a] = max(A[a], b);
	}
	for(int i = s-1; i > -1; --i)
	{
		A[i] = max(A[i], A[i+1] + 1);
	}
	cout<<*A;
	return 0;
}
