#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char S[1000009];
vector<string> ans[1000001];

int main()
{
	ios_base::sync_with_stdio(0);
	string s;
	stack<int> st;
	int p,ind=0,sz=0;
	char c;
	cin>>S;
	while(S[ind])
	{
		s="";
		while(S[ind]!=',')s.push_back(S[ind++]);
		++ind;
		p=0;
		while(S[ind]&&S[ind]!=',')p = p*10+S[ind++]-'0';
		ans[st.size()].push_back(s);
		cout<<s<<' '<<p<<endl;
		st.push(p);
		sz = max(sz,int(st.size()));
		while(!st.empty() && st.top()==0)
		{
			st.pop();
			if(!st.empty())st.top()-=1;
		}
		++ind;
	}
	cout<<sz<<'\n';
	for(int i = 0; i < sz; ++i)
	{
		for(auto j:ans[i])cout<<j<<' ';cout<<'\n';
	}
	return 0;
}