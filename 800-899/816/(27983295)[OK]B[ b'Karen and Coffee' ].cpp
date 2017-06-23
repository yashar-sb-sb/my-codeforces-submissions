#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200002];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, q, l, r;
    cin>>n>>k>>q;
    for(int i = 0; i < n; ++i)
    {
        cin>>l>>r;
        ++A[l];
        --A[r+1];
    }
    for(int i = 1; i < 200002; ++i)
        A[i] += A[i-1];
    for(int i = 1; i < 200002; ++i)
    {
        A[i] = A[i]>=k;
        A[i] += A[i-1];
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<A[r]-A[l-1]<<'\n';
    }
    return 0;
}
