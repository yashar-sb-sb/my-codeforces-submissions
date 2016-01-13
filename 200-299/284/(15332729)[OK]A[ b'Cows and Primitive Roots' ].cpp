#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int p;
	cin>>p;
	int s = 0;
	for(int i = 1; i < p; ++i)
	{
		int x = i;
		bool f = true;
		for(int j = 2; j < p; ++j)
		{
			f = f && (x+p-1)%p;
			x = x*i%p;
		}
		s += f && !((x+p-1)%p);
	}
	cout<<s;
	return 0;
}
