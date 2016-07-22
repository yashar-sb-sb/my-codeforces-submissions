#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,s,f,l=1e5+1,r=0,t;
	cin>>n>>m>>s>>f;
	int step = 0;
	cin>>t;
	while(true)
	{
		++step;
		if(step==t)
		{
			cin>>l>>r;
			if(--m)cin>>t;
		}
		if(s==f)break;
		if(s<f)
		{
			if(r<s || l > s+1)cout<<"R",++s;
			else cout<<"X";
		}
		else
		{
			if(r<s-1 || l > s)cout<<"L",--s;
			else cout<<"X";
		}
		r = 0;
		l = 1e5+1;
	}
	cout<<endl;
	return 0;
}
