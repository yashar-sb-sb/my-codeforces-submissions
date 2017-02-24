#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[10000001];
vector<int> B[10000001];
int S[10000001];
int ans[10000001];

int main()
{
    ios_base::sync_with_stdio(0);
    int n,m,k,inp;
    cin>>n>>m>>k;
    for(int i = 0; i < n; ++i)
    {
    	cin>>inp;
    	++A[inp];
    }
    for(int i = 1; i < 10000001; ++i)A[i] += A[i-1];
    for(int i = 1; i <= m; ++i)
    {
    	cin>>inp;
    	B[inp].push_back(i);
    }
    int mi = 1e9;
    for(int i = 10000000; i >= 0; --i)
    {
    	mi = min((LL)mi, k*LL(i+1)-LL(A[i]));
    	S[i] = mi;
    }
    if(mi<0)return cout<<-1,0;
    int cur = 0;
    for(int i = 0; i < 10000001; ++i)
    {
    	while(B[i].size() && cur<S[i])
    	{
    		ans[cur++] = B[i].back();
    		B[i].pop_back();
    	}
    }
    cout<<cur<<'\n';
    for(int i = 0; i < cur; ++i)cout<<ans[i]<<' ';cout<<'\n';
}