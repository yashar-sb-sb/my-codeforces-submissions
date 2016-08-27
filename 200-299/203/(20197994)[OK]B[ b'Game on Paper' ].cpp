#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<pii,int> ma;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,a,b;
	cin>>n>>m;
	int r = -1;
	for(int i = 1; i<= m; ++i)
	{
		cin>>a>>b;
		if(++ma[pii(a,b)] == 9){r = i; break;}
		if(++ma[pii(a,b-1)] == 9){r = i; break;}
		if(++ma[pii(a,b+1)] == 9){r = i; break;}
		if(++ma[pii(a-1,b)] == 9){r = i; break;}
		if(++ma[pii(a-1,b-1)] == 9){r = i; break;}
		if(++ma[pii(a-1,b+1)] == 9){r = i; break;}
		if(++ma[pii(a+1,b)] == 9){r = i; break;}
		if(++ma[pii(a+1,b-1)] == 9){r = i; break;}
		if(++ma[pii(a+1,b+1)] == 9){r = i; break;}
	}
	cout<<r<<endl;
}