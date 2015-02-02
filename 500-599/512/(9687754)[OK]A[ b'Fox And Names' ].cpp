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

string A[100];
char B[26];
bool C[26];

map<char,map<char,bool> > ma;

bool f(int l, int r, int c)
{
	if(l+2>r)return true;
	map<char,bool> m;
	m[A[l][c]] = true;
	int t = A[l].size() == c ? l+1 : l;
	for(int i = t+1; i < r; ++i)
	{
		if(A[i].size() == c || (A[i][c] != A[i-1][c] && m[A[i][c]]))return false;
		if(A[i][c] != A[i-1][c])
		{
			ma[A[i-1][c]][A[i][c]] = true;
			if(!f(t,i,c+1))return false;
			t = i;
		}
		m[A[i][c]] =true;
	}
	if(!f(t,r,c+1))return false;
	return true;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	if(!f(0,n,0))
	{
		cout<<"Impossible";
		return 0;
	}
	int t = 0;
	bool f1 = true;
	while(t<26&&f1)
	{
		f1 = false;
		for(int i = 0; i < 26; ++i)
		{
			if(C[i])continue;
			for(int j = 0; j < 26; ++j)
			{
				if(ma[j+'a'][i+'a'])goto nxt;
			}
			B[t++] = i+'a';
			ma[i+'a'].clear();
			C[i]=true;
			f1 = true;
			nxt:;
		}
	}
	if(t<26)
	{
		cout<<"Impossible";
		return 0;
	}
	for(int i = 0; i < 26; ++i)cout<<B[i];
	return 0;
}
