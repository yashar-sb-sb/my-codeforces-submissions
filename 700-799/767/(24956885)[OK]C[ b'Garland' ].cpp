#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[1000001];
int temp[1000001];
int sum;
vector<int> f(int v = T[0][0])
{
	vector<int> ans;
	for(int i:T[v])
	{
		auto a = f(i);
		temp[v] += temp[i];
		if(a.size()>1)
			return a;
		if(a.size())
		{
			ans.push_back(a[0]);
			if(temp[i] == 2*sum)ans.push_back(i);
			if(ans.size()>1)
			{
				return ans;
			}
		}
		else
		{
			if(temp[i]==sum)
			{
				ans.push_back(i);
				if(ans.size()>1)
				{
					return ans;
				}
			}
		}
	}
	return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n, a, t;
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
    	cin>>a>>t;
    	sum += temp[i] = t;
    	T[a].push_back(i);
    }
    if(sum %3 != 0)return cout<<-1,0;
    sum /= 3;
   	auto ans = f();
   	if(ans.size()<2)return cout<<-1,0;
   	cout<<ans[0]<<' '<<ans[1]<<endl;
}