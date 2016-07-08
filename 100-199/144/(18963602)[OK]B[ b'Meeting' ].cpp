#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int xm,ym, x,y;
	cin>>xm>>ym>>x>>y;
	if(xm>x)swap(x,xm);
	if(ym>y)swap(y,ym);
	vector<pii>a,b;
	for(int i = xm; i <= x; ++i)
		for(int j = ym; j <= y; ++j)
		{
			if(i>xm && i<x && j > ym && j < y){j = y-1;continue;}
			a.push_back(pii(i,j));
		}
	int n,r;
	cin>>n;
	while(n--)
	{
		b.clear();
		cin>>x>>y>>r;
		for(auto i:a)
		{
			if((i.first-x)*(i.first-x)+(i.second-y)*(i.second-y)>r*r)b.push_back(i);
		}
		swap(a,b);
	}
	cout<<a.size()<<endl;
	return 0;
}
