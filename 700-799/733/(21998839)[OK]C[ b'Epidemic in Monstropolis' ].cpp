#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;
typedef pair<int,char> pic;

int sdafjkasdf,A[501], b;
vector<pic>res;

void f(int fr, int to)
{
	if(fr == to)return;
	int mi = fr;
	int i = fr+1;
	while(i<=to && A[i]==A[mi])
	{
		mi = i;
		++i;
	}
	while(i<=to)
	{
		if(A[i]>A[mi])
		{
			mi = i;
		}
		++i;
	}
	if(A[mi] == A[fr] && mi == to)return;
	int temp = A[to+1];
	A[fr-1] = A[mi];
	A[to+1] = A[mi];
	b += mi - fr + 1;
	int l = mi-fr, r = to-mi;
	if(A[mi] > A[mi-1])
	{
		res.push_back(pic(b--,'L'));
		--l;
	}
	while(r--)res.push_back(pic(b,'R'));
	while(l--)res.push_back(pic(b--,'L'));
	A[to+1] = temp;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,k;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	cin>>k;
	int sum = 0, from, c=0, inp;
	for(int i = 0; i < k; ++i)
	{
		cin>>inp;
		sum = 0;
		from = c;
		while(sum<inp && c<n)
		{
			sum+=A[c++];
		}
		if(sum != inp)
		{
			cout<<"NO\n";
			return 0;
		}
		b = i;
		f(from,c-1);
	}
	if(res.size() == n-k)
	{
		cout<<"YES\n";
		for(int i = 0; i < n-k; ++i)cout<<res[i].first<<' '<<res[i].second<<'\n';
	}
	else cout<<"NO\n";
	return 0;
}