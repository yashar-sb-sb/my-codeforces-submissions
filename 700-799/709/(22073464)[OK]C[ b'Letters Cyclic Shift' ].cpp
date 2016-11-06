#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int main()
{
ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	int l = -1;
	while(++l < s.size() && s[l] == 'a');
	if(l == s.size())
	{
		s[s.size()-1] = 'z';
	}
	while(l < s.size() && s[l] != 'a')--s[l++];
	cout<<s<<endl;
	return 0;
}