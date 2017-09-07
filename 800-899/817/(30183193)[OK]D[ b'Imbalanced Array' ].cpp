#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[1000000];
set<int> se;

LL f(pii i)
{
    auto x = se.find(i.second);
    LL l = *prev(x);
    LL r = *next(x);
    LL ans = (*x-l) * (r-*x) * i.first;
    se.erase(x);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        A[i].second = i, cin>>A[i].first;
    sort(A, A+n);
    LL ma = 0, mi = 0;
    for(int i = -1; i <= n; ++i)
        se.insert(i);
    for(int i = 0; i < n; ++i)
        ma += f(A[i]);
    for(int i = -1; i <= n; ++i)
        se.insert(i);
    for(int i = n-1; i >= 0; --i)
        mi += f(A[i]);
    cout<<ma-mi<<endl;
    return 0;
}
