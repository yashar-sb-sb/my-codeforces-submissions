#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,r,inp;
	vector<int> st;
	cin>>n>>a;
	for(int i = 1; i < a; ++i)
	{
		cin>>inp;
		st.push_back(inp);
	}
	cin>>r;
	n -= a;
	while(st.size() && n--)
	{
		cin>>inp;
		if(inp + st.back() == 2) r += 2;
		st.pop_back();
	}
	while(n--)
	{
		cin>>inp;
		r += inp;
	}
	while(st.size())
	{
		r += st.back();
		st.pop_back();
	}
	cout<<r<<endl;
	return 0;
}
