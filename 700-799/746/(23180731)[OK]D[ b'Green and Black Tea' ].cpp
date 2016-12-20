#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string s;

int main()
{
	ios_base::sync_with_stdio(0);
	int n,k,a,b;
	cin>>n>>k>>a>>b;
	char cur;
	if(a>b)cur = 'G';
	else cur = 'B';
	while(a|b)
	{
		if(cur == 'G')
		{
			if(!a)return cout<<"NO\n",0;
			for(int i = min(a,max(1,min(k,a-b))); i; --i)--a,s.push_back('G');
		}
		else
		{
			if(!b)return cout<<"NO\n",0;
			for(int i = min(b,max(1,min(k,b-a))); i; --i)--b,s.push_back('B');
		}
		if(cur=='G')cur = 'B';
		else cur = 'G';
	}
	cout<<s<<endl;
	return 0;
}