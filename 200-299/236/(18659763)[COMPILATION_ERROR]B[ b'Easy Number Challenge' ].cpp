#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> primes;
int A[101][25],t[25];

int main()
{
ios_base::sync_with_stdio(0);
	int a,b,c;
	for(int i = 2; i <= 100; ++i)
	{
		bool f = true;
		for(auto j:primes)
		{
			if(i%j==0){f = false; break;}
		}
		if(f)primes.push_back(i);
	}
	cin>>a>>b>>c;
	for(int i = 2; i <= 100; ++i)
	{
		int t = i;
		for(int j = 0; j < 25; ++j)
		{
			while(t%primes[j]==0)
			{
				t/=primes[j];
				++A[i][j];
			}
		}
	}
	unsigned int sum = 0,an = (1<<30)-1;
	for(int i = 1; i <= a; ++i)
	{
		for(int it = 0; it < 25; ++it)t[it]+=A[i][it];
		for(int j = 1; j <= b; ++j)
		{
			for(int it = 0; it < 25; ++it)t[it]+=A[j][it];
			for(int k = 1; k <= c; ++k)
			{
				int res = 1;
				for(int it = 0; it < 25; ++it)res *= (t[it]+A[k][it]+1);
				sum += res;
			}
			for(int it = 0; it < 25; ++it)t[it]-=A[j][it];
		}
		for(int it = 0; it < 25; ++it)t[it] = 0;
	}
	cout<<(sum&an)<<endl;
	return 0;
}
