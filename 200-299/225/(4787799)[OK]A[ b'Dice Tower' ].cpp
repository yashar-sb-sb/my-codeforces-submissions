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

int main()
{
ios_base::sync_with_stdio(0);
	int n,j,l,r,t;
	cin>>n>>j;
	if(j>3)j=7-j;
	for(int i = 0; i < n; ++i)
	{
		cin>>l>>r;
		if(l>3)l=7-l;
		if(r>3)r=7-r;
		t = 6 - l - r;
		if(t!=j)
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}