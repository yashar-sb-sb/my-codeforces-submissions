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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool prime(int n)
{
	if(n==1)return false;
	for(int i = 2; i < sqrt(n)+1 && i < n; ++i)if(n%2 == 0)return false;
	return true;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 1; true; ++i)
	{
		if(!prime(i)&&!prime(n-i))
		{
			cout<<i<<' '<<n-i;
			return 0;
		}
	}
	return 0;
}