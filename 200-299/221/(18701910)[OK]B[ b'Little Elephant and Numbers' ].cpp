#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<pii> a;

int mask;

int f(vector<pii>::iterator it, int num = 1)
{
	if(it == a.end())
	{
		int m = 0;
		while(num)
		{
			m |= 1 << num%10;
			num /= 10;
		}
		return bool(mask&m);
	}
	int sum = 0;
	for(int i = it->second; i >= 0; --i)
	{
		sum += f(it+1,num);
		num *= it->first;
	}
	return sum;
}

int main()
{
ios_base::sync_with_stdio(0);
	int x,t;
	cin>>x;
	t = x;
	while(t)
	{
		mask |= 1 << t%10;
		t /= 10;
	}
	t = x;
	for(int i = 2; i*i <= t; ++i)
	{
		if(t%i==0)
		{
			pii c(i,0);
			while(t%i == 0)
			{
				++c.second;
				t /= i;
			}
			a.push_back(c);
		}
	}
	if(t>1)a.push_back(pii(t,1));
	cout<<f(a.begin())<<endl;
	return 0;
}
