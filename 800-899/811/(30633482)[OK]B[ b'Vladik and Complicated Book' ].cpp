#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[10001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    for(int t = 0; t < m; ++t)
    {
        int l, r, x;
        cin>>l>>r>>x;
        int count = 0;
        for(int i = l; i <= r; ++i)
            if(A[i] < A[x])
                ++count;
        cout<<(l+count == x ? "Yes" : "No")<<'\n';
    }
    return 0;
}
