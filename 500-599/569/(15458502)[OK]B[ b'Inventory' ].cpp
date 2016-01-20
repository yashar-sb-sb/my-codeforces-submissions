#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[(int)1e5+1], H[(int)1e5+1];
vector<int> B;

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>A[i];
		if(H[A[i]] || A[i]>n)B.push_back(i);
		H[A[i]] = true;
	}
	for(int i = 1; i <= n; ++i)
	{
		if(!H[i])
		{
			A[B.back()] = i;
			B.pop_back();
		}
	}
	for(int i = 1; i <= n; ++i)cout<<A[i]<<' ';
	return 0;
}
