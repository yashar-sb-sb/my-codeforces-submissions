#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>
#include<cstdio>
#include<list>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string A[100000];
bool f(string l, string r)
{
//	cout<<'a'<<endl;
	if(l.size()<r.size())return true;
	if(l.size()>r.size())return false;
	for(int i = 0; i < l.size(); ++i)
		if(l[i]<r[i])return true;
		else if(l[i]>r[i])return false;
	return false;
}
string f(int n, string s)
{
	for(int i = s.size()-1; i >= 0; --i)
	{
		if(s[i] == '?')
		{
			s[i] = n%10+'0';
			n/=10;
		}
	}
	return s;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	for(int i = 0,j=0; i < A[0].size(); ++i)
	{
		if(A[0][i] == '?')
		{
			if(j)
			{
				A[0][i] = '0';
			}
			else
			{
				j = 1;
				A[0][i] = '1';
			}
		}
	}
	for(int i = 1; i < n; ++i)
	{
		int t = 0,l,r;
		string s=A[i];
		for(int j = 0; j < s.size(); ++j)if(s[j]=='?')++t;
		if(!t)continue;
		l = 1;
		r = 9;
//	cout<<i<<endl;
		for(int j = 1; j < t; ++j)l*=10,r=r*10+9;
		int m = (l + r)/2;
		t = r;
		while(f(A[i-1],f(r, A[i])))
		{
			if(f(A[i-1],f(m, A[i])))r = m-1;
			else l = m + 1;
			m = (l + r)/2;
		}
//	cout<<i<<endl;
		if(l<t)++l;
		if(l<t)++l;
		if(l<t)++l;
		while(f(A[i-1],f(l, A[i])))--l;
		++l;
		A[i] = f(l,A[i]);
//	cout<<i<<endl;
	}
	for(int i = 1; i < n; ++i)
	{
		if(!f(A[i-1],A[i]))
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	for(int i = 0; i < n; ++i)cout<<'\n'<<A[i];
	return 0;
}
