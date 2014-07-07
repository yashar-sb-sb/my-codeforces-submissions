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

int main()
{
ios_base::sync_with_stdio(0);
	int n,c=0;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = i; sqrt(j*j+i*i)<=n; ++j)
		{
			int t = sqrt(j*j+i*i);
			if(t*t==j*j+i*i)++c;
		}
	}
	cout<<c;
	return 0;
}