#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,l=0,inp;
	cin>>n;
	set<int> s;
	s.insert(0);
	while(n--)
	{
		cin>>inp;
		while(*s.rbegin() > inp)
		{
			s.erase(*s.rbegin());
			++l;
		}
		s.insert(inp);
	}
	cout<<l<<endl;
	return 0;
}
