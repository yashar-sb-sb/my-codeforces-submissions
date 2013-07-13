#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int l[5],r[5],t[5],b[5];

int main()
{
	int n,mt=0,mb=31400,mr=0,ml=31400,s=0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>l[i]>>b[i]>>r[i]>>t[i];
		if(mt<t[i])
		{
			mt = t[i];
		}
		if(mr<r[i])
		{
			mr = r[i];
		}
		if(mb>b[i])
		{
			mb = b[i];
		}
		if(ml>l[i])
		{
			ml = l[i];
		}
		s+= (t[i]-b[i])*(r[i]-l[i]);
	}
	if(mt-mb == mr-ml && s == (mt-mb)*(mr-ml))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}