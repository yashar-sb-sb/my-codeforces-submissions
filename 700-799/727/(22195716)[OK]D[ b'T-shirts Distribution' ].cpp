#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

map<string,int> m;
pair<pii,int> A[100000];
int ans[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int T[7];
	T[0] = 0;
	for(int i = 1; i < 7; ++i)cin>>T[i];
	int n;
	cin>>n;
	m["S"] = 1;
	m["M"] = 2;
	m["L"] = 3;
	m["XL"] = 4;
	m["XXL"] = 5;
	m["XXXL"] = 6;
	string s;
	int tmp;
	for(int i = 0; i < n; ++i)
	{
		cin>>s;
		if(s.find(',') == -1)A[i] = pair<pii,int>(pii(0,m[s]),i);
		else
		{
			tmp = m[s.substr(0,s.find(','))];
			A[i] = pair<pii,int>(pii(tmp,tmp+1),i);
		}
	}
	sort(A,A+n);
	for(int i = 0; i < n; ++i)
	{
		if(T[A[i].first.first])
		{
			--T[A[i].first.first];
			ans[A[i].second] = A[i].first.first;
		}
		else if(T[A[i].first.second])
		{
			--T[A[i].first.second];
			ans[A[i].second] = A[i].first.second;
		}
		else return cout<<"NO",0;
	}
	string K[7] = {"","S", "M", "L", "XL", "XXL", "XXXL"};
	cout<<"YES\n";
	for(int i = 0; i < n; ++i)
	{
		cout<<K[ans[i]]<<'\n';
	}
	return 0;
}