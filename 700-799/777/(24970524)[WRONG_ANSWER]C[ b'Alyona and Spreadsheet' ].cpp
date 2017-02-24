#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;



int main()
{
    ios_base::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> A(n,vector<int>(m,0));
    vector<vector<int>> S(n,vector<int>(m,1));
    vector<int> ma(n,0);
    for(int i = 0; i < n; ++i)
    	for(int j = 0; j < m; ++j)
    		cin>>A[i][j];
    for(int i = 1; i < n; ++i)
    	for(int j = 0; j < m; ++j)
    		if(A[i][j] >= A[i-1][j])
    			S[i][j] = S[i-1][j] + 1;
    for(int i = 0; i < n; ++i)
    	for(int j = 0; j < m; ++j)
    		ma[i] = max(S[i][j],ma[i]);
    int k;
    cin>>k;
    int l,r;
    while(k--)
    {
    	cin>>l>>r;
    	l = r -l+1;
    	--r;
    	if(ma[r] >= l)cout<<"YES";
    	else cout<<"NO";
    	cout<<'\n';
    }
}