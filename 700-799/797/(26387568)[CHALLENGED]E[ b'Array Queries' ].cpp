#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

unordered_map<LL,int> dp;
int n;
int A[100001];


int f(int p, int k)
{
    if(p>n)
        return 0;
    LL tm = LL(p) + (LL(k)<<32);
    if(dp.find(tm) != dp.end())
        return dp[tm];
    return dp[tm] = 1 + f(p+A[p]+k, k);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    int q, p, k;
    cin>>q;
    while(q--)
    {
        cin>>p>>k;
        cout<<f(p,k)<<'\n';
    }
    return 0;
}
