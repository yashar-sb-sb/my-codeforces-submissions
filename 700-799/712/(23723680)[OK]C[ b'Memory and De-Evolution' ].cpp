#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	ios_base::sync_with_stdio(0);
	int inp,count=0,t;
	cin>>t>>inp;
	vector<int>v(3,inp);
	while(v[0]<t)
	{
		++count;
		v[0] = min(v[1]+v[2]-1,t);
		sort(v.begin(),v.end());
	}
	cout<<count<<endl;
	return 0;
}