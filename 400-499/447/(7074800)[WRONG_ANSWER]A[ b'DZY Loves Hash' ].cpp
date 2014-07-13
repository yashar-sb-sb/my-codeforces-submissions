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

int A[300];

int main()
{
ios_base::sync_with_stdio(0);
	int p,n,x;
	cin>>p>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
		x = i;
		while(x--)
		{
			if(A[i]%p == A[x]%p)
			{
				cout<<i;
				return 0;
			}
		}
	}
	cout<<-1;
	return 0;
}