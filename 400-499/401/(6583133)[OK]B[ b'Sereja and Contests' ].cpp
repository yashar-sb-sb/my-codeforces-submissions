#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,inp,s1=0,s2=0;
	vector<int> v;
	cin>>n>>k;
	v.push_back(0);
	v.push_back(n);
	while(k--)
	{
		cin>>inp;
		if(inp==1)
		{
			cin>>inp;
			v.push_back(inp);
		}
		cin>>inp;
		v.push_back(inp);
	}
	sort(v.begin(),v.end());
	n = v.size() - 1;
	for(int i = 0; i < n; ++i)
	{
		k = v[i+1]-v[i]-1;
		s1+=k/2+k%2;
		s2+=k;
	}
	cout<<s1<<' '<<s2;
	return 0;
}