#include<bits/stdc++.h>

using namespace std;

typedef long long LL;

typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int calc(int a, int b)
{
	int d = 0;
	bool f = true;
	while(a|b)
	{
		if(f)
		{
			if(a)--a;
			else ++d,--b,f = false;
		}
		else
		{
			if(b)--b;
			else ++d,--a, f = true;
		}
		if(a|b)
		{
			if(f)
			{
				if(b)++d,--b,f = false;
				else --a;
			}
			else
			{
				if(a)++d,--a, f = true;
				else  --b;
			}
		}
	}
	return d;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	int r = min(calc(n,m),calc(m,n));
	cout<<n+m-1-r<<' '<<r<<endl;
	return 0;
}
