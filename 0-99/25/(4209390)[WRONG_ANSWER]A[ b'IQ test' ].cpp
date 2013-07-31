#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

short*v;

bool comp(short i, short j){return v[i]<v[j];}

int main()
{
ios_base::sync_with_stdio(0);
	short n,*a;
	cin>>n;
	a = new short[++n+1];
	v = new short[n];
	*v=101, a[n]=0;
	for(int i = 0; i < n; a[i]=i++);
	for(int i = 1; i < n; cin>>v[i++]);
	sort(a+1,a+n,comp);
	for(int i = 1; i < n; ++i)
	{
		if(v[a[i]]!=v[a[i-1]]&&v[a[i]]!=v[a[i+1]])
		{
			cout<<a[i];
			return 0;
		}
	}
	return 0;
}