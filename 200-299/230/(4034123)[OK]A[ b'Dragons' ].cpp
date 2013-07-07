#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int s, n, x, y;
	cin>>s>>n;
	vector<pii> d;
	while(n--)
	{
		cin>>x>>y;
		if(x<s)
		{
			s+=y;
		}
		else
		{
			d.push_back(pii(x,y));
		}
	}
	sort(d.begin(),d.end());
	int l = d.size();
	for(int i = 0; i < l; ++i)
	{
		if(d[i].first<s)
		{
			s+= d[i].second;
		}
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<< "YES";
	return 0;
}