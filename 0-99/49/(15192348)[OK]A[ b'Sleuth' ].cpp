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
	char c;
	while(cin>>s, *s.rbegin()!='?')c = *s.rbegin();
	if(s.size() > 1)c = *(s.rbegin()+1);
	s = "aeiouyAEIOUY";
	cout<<(s.find(c) == -1 ? "NO" : "YES");
	return 0;
}
