#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL A[5001];

#define sum(l,r) (A[r] - A[l])

pair<LL,int> ma(int l, int r)
{
    LL ans = sum(l,r);
    int  d = r;
    for(int i = l; i < r; ++i)
    {
        LL t = sum(l, i) - sum(i,r);
        if(t > ans)
        {
            ans = t;
            d = i;
        }
    }
    return {ans, d};
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    for(int i = 2; i <= n; ++i)
        A[i] += A[i-1];
    LL ans = sum(0, n);
    int D0 = 0, D1 = n, D2 = n;
    for(int d1 = 0; d1 <= n; ++d1)
    {
        auto L = ma(0,d1), R = ma(d1,n);
        if(ans < L.first + R.first)
        {
            ans = L.first + R.first;
            D0 = L.second;
            D1  = d1;
            D2 = R.second;
        }
    }
    cout<<D0<<' '<<D1<<' '<<D2<<endl;
    return 0;
}
