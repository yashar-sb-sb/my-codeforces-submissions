#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string s, p = "abc";
	cin>>s;
	int n = s.size();
	s.push_back('.');
	for(int i = 1; i < n; ++i)
	{
		if(s[i] == s[i-1])
		{
			int j;
			for(j = 0; s[i]==p[j] || s[i+1]==p[j];++j);
			s[i] = p[j];
		}
	}
	s.pop_back();
	cout<<s<<endl;
	return 0;
}