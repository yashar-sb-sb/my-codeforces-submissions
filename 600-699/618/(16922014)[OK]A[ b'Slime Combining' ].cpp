#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 20; i > 0; --i)
	{
		if((1 << i - 1)&n)cout<< i << ' ';
	}
	return 0;
}
