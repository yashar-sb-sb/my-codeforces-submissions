
#include <bits/stdc++.h>
#include <stdio.h>
#define lli long long int
#define pii pair<int,int>
#define plli pair<lli,lli>
#define X first
#define Y second
using namespace std;

plli A[4000];
vector<lli> B;

plli m,tmm;
lli res = 0;

int main()
{
	lli n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].first>>A[i].second;
		if(A[i].first<A[i].second)swap(A[i].first,A[i].second);
	}
	sort(A,A+n);
	for(int i = 0; i < n; ++i)
	{
		lli k = 0;
		B.clear();
		for(int j = i; j < n; ++j)
		{
			B.push_back(A[j].second);
		}
		sort(B.begin(),B.end());
		for(int j = 0; j < B.size(); ++j)
		{
			if((B.size()-j)*B[j]*A[i].first>k)
			{
				k = (B.size()-j)*B[j]*A[i].first;
				tmm.first = A[i].first;
				tmm.second = B[j];
			}
		}
		if(k>res){res = k; m.first = tmm.first; m.second = tmm.second;}
	}
	cout<<res<<'\n'<<m.first<<' '<<m.second<<'\n';
	return 0;
}