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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int f[7000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,v,a,b,s=0,t;
	cin>>n>>v;
	fill(f,f+7000,0);
	while(n--)
	{
		cin>>a>>b;
		f[a]+=b;
	}
	for(int i = 1; i < 7000; ++i)
	{
		t = min(v,f[i-1]);
		s+=t;
		t = min(f[i],v-t);
		f[i]-=t;
		s+=t;
	}
	cout<<s;
	return 0;
}