#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[10];

int main()
{
ios_base::sync_with_stdio(0);
	int v,m = 1e5,l;
	cin>>v;
	for(int i = 1; i <10; ++i)
	{
		cin>>A[i];
		m = min(A[i],m);
	}
	l = v/m;
	if(!l)cout<<-1;
	while(l--)
	{
		for(int i = 9; i; --i)
		{
			if(v>A[i] && (v-A[i])/m == l)
			{
				cout<<i;
				v -= A[i];
				break;
			}
		}
	}
	return 0;
}
