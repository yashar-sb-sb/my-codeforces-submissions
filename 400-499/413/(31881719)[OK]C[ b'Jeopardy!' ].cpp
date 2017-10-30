#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[101];
int F[101];
int M[101];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n ,m;
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    int inp;
    for(int i = 1; i <= m; ++i)
    {
        cin>>inp;
        F[inp] = 1;
        M[i-1] = A[inp];
    }
    sort(M, M+m, greater<int>());
    LL ans = 0;
    for(int i = 1; i <= n; ++i)
        if(!F[i])
            ans += A[i];
    for(int i = 0; i < m; ++i)
        ans += max(ans, LL(M[i]));
    cout<<ans<<endl;
    return 0;
}
