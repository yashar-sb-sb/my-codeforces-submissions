#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<string> A[256];
int n,q;
set<string> M;

void f(string s)
{
	if(s.size() == n){M.insert(s);return;}
	for(int i = 0; i < 1; ++i)
	{
		if(!A[s[i]].empty())
		{
			for(auto it:A[s[i]])
			{
				string t = s;
				t.replace(i,1,it);
				f(t);
			}
		}
	}
}

int main()
{
ios_base::sync_with_stdio(0);
	char c;
	string s;
	cin>>n>>q;
	for(int i = 0; i < q; ++i)
	{
		cin>>s>>c;
		A[c].push_back(s);
	}
	f("a");
	cout<<M.size()<<'\n';
	return 0;
}
