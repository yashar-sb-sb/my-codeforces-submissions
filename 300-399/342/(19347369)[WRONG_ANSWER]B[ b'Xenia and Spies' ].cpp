#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,s,f,l,r;
	cin>>n>>m>>s>>f;
	while(m--)
	{
		cin>>l>>l>>r;
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
	}
	cout<<endl;
	return 0;
}
