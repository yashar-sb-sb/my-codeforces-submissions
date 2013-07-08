#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<pii>v;

bool func1(int i, int j)
{
	return v[i].first<v[j].first || (v[i].first==v[j].first && v[i].second<v[j].second);
}

bool func2(int i, int j)
{
	return v[i].second<v[j].second || (v[i].second==v[j].second && v[i].first<v[j].first);
}

int main()
{
	int n,x,y,c=0;
	cin >> n;
	v = vector<pii>(n);
	vector<int>xs(n);
	vector<int>ys(n);
	vector<bool>f(n);
	for(int i = 0; i < n; ++i)
	{
		cin>>v[i].first>>v[i].second;
		xs[i]=i;
		ys[i]=i;
	}
	sort(xs.begin(),xs.end(),func1);
	sort(ys.begin(),ys.end(),func2);
	--n;
	for(int i = 1; i < n; ++i)
	{
		if(v[xs[i]].first == v[xs[i-1]].first && v[xs[i]].first == v[xs[i+1]].first)
		{
			if(f[xs[i]])
			{
				++c;
			}
			else
			{
				f[xs[i]] = true;
			}
		}
		if(v[ys[i]].second == v[ys[i-1]].second && v[ys[i]].second == v[ys[i+1]].second)
		{
			if(f[ys[i]])
			{
				++c;
			}
			else
			{
				f[ys[i]] = true;
			}
		}
	}
	cout<<c;
	return 0;
}