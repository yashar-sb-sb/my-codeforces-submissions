#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int>q;
int n;
int A[1001];
bool F[1001];
void f()
{
	memset(F,0,sizeof(F));
	for(auto i:q)F[i] = true;
	int inp;
	for(int i = 1; i <= n; ++i)
	{
		cin>>inp;
		if(!F[i])A[i] = min(A[i],inp);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin>>n;
	for(int i = 1; i <= n; ++i)A[i] = 1e9;
	for(int i = 0; i < 10; ++i)
	{
		int s = 1<<i;
		q.clear();
		for(int j = 1; j <= n; j+=2*s)
		{
			for(int k = 0; k < s && j+k<=n; ++k)q.push_back(j+k);
		}
		if(q.size()&&q.size()<n)
		{
			cout<<q.size()<<endl;
			for(auto k:q)cout<<k<<' ';cout<<endl;
			f();
		}
		for(int i = 0; i < q.size(); ++i)q[i] += s;
		while(q.size()>0 && q.back()>n)q.pop_back();
		if(q.size())
		{
			cout<<q.size()<<endl;
			for(auto k:q)cout<<k<<' ';cout<<endl;
			f();
		}
	}
	cout<<-1<<endl;
	for(int i = 1; i <= n; ++i)cout<<A[i]<<' ';cout<<endl;
	return 0;
}