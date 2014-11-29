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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);std::cin.tie(0);
	int n,a,b,s = 0;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(s+a<=500)
		{
			s+=a;
			cout<<'A';
		}
		else
		{
			s-=b;
			cout<<'G';
		}
	}
	return 0;
}
