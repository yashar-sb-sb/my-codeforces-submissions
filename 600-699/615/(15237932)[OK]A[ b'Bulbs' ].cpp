#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n, m;
	cin>> n>>m;
	set<int> s;
	while(n--)
	{
		int a;
		cin>>a;
		while(a--)
		{
			int k;
			cin>>k;
			s.insert(k);
		}
	}
	if(s.size() == m)cout<<"YES";
	else cout<<"NO";
	return 0;
}
