#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,s=0,m1 = 0, m2=0;
	cin>>n>>k;
	int *A = new int[n];
	int *S = new int[n-k+1];
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	for(int i = n - k; i < n; ++i)
	{
		s+=A[i];
	}
	S[n-k] = s;
	for(int i = n - k -1; i > -1; --i)
	{
		S[i] = S[i+1] + A[i] - A[i+k];
	}
	for(int i = 0; i < n-k +1; ++i)
	{
		if(S[i]>S[m1])m1 = i;
	}
	for(int i = m1; i < n-k; ++i)
	{
		A[i] = A[i+k];
	}
	for(int i = n - k-k; i < n-k; ++i)
	{
		s+=A[i];
	}
	S[n-k-k] = s;
	for(int i = n - k - k -1; i > -1; --i)
	{
		S[i] = S[i+1] + A[i] - A[i+k];
	}
	for(int i = 0; i < n-k - k +1; ++i)
	{
		if(S[i]>S[m2])m2 = i;
	}
	++m1;
	++m2;
	if(m2<m1)cout<<m2<<' '<<m1;
	else cout<<m1<<' '<<m2+k;
	return 0;
}