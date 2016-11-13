#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int L['Z'+1];

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	int l,r;
	memset(L,-1,sizeof(L));
	for(int i = 0; i < 27; ++i)
	{
		if(L[s[i]] == -1)L[s[i]] = i;
		else
		{
			l = L[s[i]];
			r = i;
		}
	}
	for(int i = r; i < 27; ++i)s[i] = s[i+1];
	s.pop_back();
	if(r-l==1)return cout<<"Impossible",0;
	string ans = s;
	for(int i = 0; i < 26; ++i)
	{
		ans[(26+12-(r-l-1)/2+i)%26] = s[(i+l)%26];
	}
	for(int i = 0; i < 13; ++i)cout<<ans[i];cout<<'\n';
	for(int i = 0; i < 13; ++i)cout<<ans[25-i];cout<<'\n';
	return 0;
}