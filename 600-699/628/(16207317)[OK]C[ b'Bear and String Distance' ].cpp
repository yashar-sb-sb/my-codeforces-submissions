#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[500001];

int main()
{
ios_base::sync_with_stdio(0);
	int n, k,t;
	char c;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)
	{
		cin>>c;
		if('z'-c>c-'a')
		{
			t = 'z'-c;
			if(t>k)t = k;
			k-=t;
			A[i]= c+t;
		}
		else
		{
			t = c-'a';
			if(t>k)t = k;
			k-=t;
			A[i]= c-t;
		}
	}
	if(k)cout<<-1;
	else cout<<A;
	return 0;
}
