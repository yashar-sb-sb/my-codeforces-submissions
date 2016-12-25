#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<string,vector<int>> A;

int main()
{
	ios_base::sync_with_stdio(0);
	int k,n,b,sum = 0;
	vector<int> mas;
	mas.push_back(0);
	string s;
	cin>>k>>n;
	for(int i = 0; i < k; ++i)
	{
		cin>>s>>b;
		A[s].push_back(b);
	}
	for(auto i = A.begin(); i != A.end(); ++i)
	{
		i->second.push_back(-1e9);
		i->second.push_back(-1e9);
		sort(begin(i->second),end(i->second));
	}
	for(auto i = A.begin(); i != A.end(); ++i)
	{
		s = i->first;
		reverse(begin(s),end(s));
		auto j = A.find(s);
		if(j==A.end())continue;
		int fir,sec;
		do
		{
			fir = i->second.back();
			i->second.pop_back();
			sec = j->second.back();
			j->second.pop_back();
			if(fir+sec>0)
			{
				sum+=fir+sec;
				if(i == j)
				{
					if(fir<0)mas.push_back(-fir);
					if(sec<0)mas.push_back(-sec);
				}
			}
			else break;
		}
		while(1);
		if(i == j)
		{
			if(fir>0)mas.push_back(fir);
			if(sec>0)mas.push_back(sec);
		}
	}
	int resm = 0;
	for(auto i:mas)resm = max(resm,i);
	cout<<sum+resm<<endl;
	return 0;
}