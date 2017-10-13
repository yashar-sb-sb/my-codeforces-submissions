#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n, m;
int A[50][50];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin>>A[i][j];
    LL ans = -n*m-2*m-2*n;
    for(int i = 0; i < n; ++i)
    {
        int ones = 0;
        for(int j = 0; j < m; ++j)
            ones += A[i][j];
        ans += 1LL<<ones;
        ans += 1LL<<(m-ones);
    }
    for(int i = 0; i < m; ++i)
    {
        int ones = 0;
        for(int j = 0; j < n; ++j)
            ones += A[j][i];
        ans += 1LL<<ones;
        ans += 1LL<<(n-ones);
    }
    cout<<ans<<endl;
    return 0;
}
