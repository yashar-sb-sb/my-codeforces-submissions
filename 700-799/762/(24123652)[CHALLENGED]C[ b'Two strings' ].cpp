#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int B[100000];

int main()
{
	ios_base::sync_with_stdio(0);
	string a, b;
	cin>>a>>b;
	int inda = 0, indb = 0;
	for(int i = 0; i < b.size(); ++i)
	{
		while(inda<a.size() && a[inda]!=b[i])++inda;
		if(inda == a.size())break;
		indb = i+1;
		B[i] = inda;
		++inda;
	}
	int sz = indb;
	int ma = indb, ll = indb, rr = b.size();
	indb = b.size();
	inda = a.size()-1;
	for(int i = b.size()-1; i > -1; --i)
	{
		while(inda>=0 && a[inda]!=b[i])--inda;
		if(inda == -1)break;
		indb = i;
		int l = min(0,sz-1), r = sz, mid;
		while(l+1<r)
		{
			mid = (l+r)/2;
			if(B[mid]<inda)l = mid;
			else r = mid;
		}
		if(B[l]>=inda)--l;
		++l;
		if(l+b.size()-indb>ma)
		{
			ll = l;
			rr = indb;
			ma = l+b.size()-indb;
		}
		--inda;
	}
	string ans = "";
	for(int i = 0; i < ll; ++i)ans.push_back(b[i]);
	for(int i = rr; i < b.size(); ++i)ans.push_back(b[i]);
	if(ans.size()==0)ans = "-";
	cout<<ans<<endl;
	return 0;
}