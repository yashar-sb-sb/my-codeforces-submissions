#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string A[500000];

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)cin>>A[i];
    for(int i = n-2; i >= 0; --i)
    {
    	int j = 0;
    	while( j < A[i].size() && j < A[i+1].size() && A[i][j]==A[i+1][j])++j;
    	if(j == A[i].size()) continue;
    	if(j == A[i+1].size() || A[i][j]>A[i+1][j])
    	{
    		for(int k = A[i].size()-j; k > 0; --k)A[i].pop_back();
    	}
    }
    for(int i = 0; i < n; ++i)cout<<A[i]<<'\n';
}