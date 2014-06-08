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
	int n,v,k,m,s;
	vector<int> vec;
	cin>>n>>v;
	for(int i = 1; i <= n; ++i)
	{
		cin>>k;
		m=1000000;
		while(k--)
		{
			cin>>s;
			if(s<m)m=s;
		}
		if(m<v)vec.push_back(i);
	}
	cout<<vec.size()<<'\n';
	for(vector<int>::iterator i = vec.begin(); i != vec.end(); ++i)cout<<*i<<' ';
	return 0;
}