#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL sum = 0, inp, mi = 1LL<<62;
vector<int> a;

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	while(n--)
	{
		cin>>inp;
		sum += inp;
		a.push_back(inp);
	}
	sort(a.begin(),a.end());
	inp = 0;
	for(int i = 0; i < a.size(); ++i)
	{
		inp += a[i];
		mi = min(mi,abs(inp+inp-sum)+1);
	}
	cout<<mi<<endl;
	return 0;
}
