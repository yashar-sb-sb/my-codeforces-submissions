#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool A[10004],B[10004];

int main()
{
	ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	if(s.size()<7)
	{
		cout<<0<<endl;
		return 0;
	}
	if(s.size()==7)
	{
		cout<<1<<endl;
		cout<<s[5]<<s[6]<<endl;
		return 0;
	}
	A[s.size()-1] = 1;
	B[s.size()-1] = 1;
	for(int i = s.size()-1; i > 1; --i)
	{
		if(A[i+2] && (s[i] != s[i+2] || s[i+1] != s[i+3] ))A[i] = 1;
		if(B[i+3])A[i] = 1;
		if(A[i+2])B[i] = 1;
		if(B[i+3] && (s[i] != s[i+3] || s[i+1] != s[i+4] || s[i+2] != s[i+5]))B[i] = 1;
	}
	set<string> ss;
	for(int i = 0; i < 6; ++i)A[i] = 0;
	for(int i = 0; i < 7; ++i)B[i] = 0;
	for(int i = 0; i < s.size(); ++i)
	{
		if(A[i])ss.insert(s.substr(i-1, 2));
		if(B[i])ss.insert(s.substr(i-2, 3));
	}
	cout<<ss.size()<<'\n';
	for(set<string>::iterator i = ss.begin(); i != ss.end(); ++i)cout<<*i<<'\n';
	return 0;
}
