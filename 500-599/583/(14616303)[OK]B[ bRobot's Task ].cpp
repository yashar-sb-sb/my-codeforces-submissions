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

pii A[1000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,su=0,d=1,p=-1,c=0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].first;
		A[i].second = i;
	}
	int i = 0;
	sort(A,A+n);
	do
	{
		while(i<n && A[i].first<=su)s.insert(A[i++].second);
		set<int>::iterator it = s.upper_bound(p);
		if(d)
		{
			if(it == s.end())
			{
				++c;
				d = 0;
			}
			else
			{
				p = *it;
				s.erase(it);
				++su;
			}
		}
		else
		{
			if(it == s.begin())
			{
				++c;
				d = 1;
			}
			else
			{
				--it;
				p = *it;
				s.erase(it);
				++su;
			}
		}
	}while(su<n);
	cout<<c;
	return 0;
}
