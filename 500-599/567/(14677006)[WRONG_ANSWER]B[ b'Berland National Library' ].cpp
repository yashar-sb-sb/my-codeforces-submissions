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

set<int> s;
char A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,t,res=0;
	cin>> n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i]>>t;
		if(A[i] == '+')s.insert(t);
		else s.erase(t);
	}
	int c = s.size();
	for(int i = n-1; i > -1; --i)
	{
		if(A[i] == '+')--c;
		else ++c;
		res = max(res,c);
	}
	cout<<res;
	return 0;
}
