#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string s,t;
	cin>>s>>t;
	int i = 0, c = 0;
	while((i = s.find(t,i)) != -1)
	{
		++c;
		s[i+t.size()-1] = '#';
		++i;
	}
	cout<<c;
	return 0;
} 
