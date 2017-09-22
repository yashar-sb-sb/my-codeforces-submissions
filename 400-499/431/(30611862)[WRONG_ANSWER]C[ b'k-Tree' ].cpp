#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n, k, d;
int mod = 1e9+7;

int dpf[101];
int dpF[101];

int F(int tot)
{
    if(dpF[tot]>=0)
        return dpF[tot];
    if(tot <= 0)
        return dpF[tot] = tot==0;
    int ans = 0;
    for(int i = 1; i <= k; ++i)
        ans = (ans + F(tot-i))%mod;
    return dpF[tot] = ans;
}
int f(int tot)
{
    if(dpf[tot]>=0)
        return dpf[tot];
    if(tot <= 0)
        return dpf[tot] = 0;
    int ans = 0;
    for(int i = 1; i < d; ++i)
        ans = (ans + f(tot-i))%mod;
    for(int i = d; i <= k; ++i)
        ans = (ans + F(tot-i))%mod;
    return dpf[tot] = ans;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(dpf, -1, sizeof(dpf));
    memset(dpF, -1, sizeof(dpF));
    cin>>n>>k>>d;
    cout<<f(n)<<endl;
    return 0;
}
