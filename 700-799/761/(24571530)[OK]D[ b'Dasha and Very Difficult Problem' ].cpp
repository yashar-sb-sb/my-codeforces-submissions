#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];
int B[100000];
pii C[100000];

int main()
{
    ios_base::sync_with_stdio(0);
    int n,l,r;
    cin>>n>>l>>r;
    for(int i = 0; i < n; ++i)cin>>A[i];
    for(int i = 0; i < n; ++i)C[i].second = i, cin>>C[i].first;
    sort(C,C+n);
    B[C[0].second] = l;
    for(int i = 1; i < n; ++i)
    {
    	int d = B[C[i-1].second] - A[C[i-1].second];
    	B[C[i].second] = max(d + A[C[i].second] + 1,l);
    	if(B[C[i].second]>r)return cout<<-1,0;
    }
    for(int i = 0; i < n; ++i)cout<<B[i]<<' ';cout<<endl;
	return 0;
}