#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200001];
int ans[200001];
vector<int> T[200001];
vector<pii> divs;
int divsn;

void f(int v, int p, int gcd = 0)
{
    gcd = __gcd(A[v], gcd);
    ans[v] = max(ans[v], gcd);
    for(int i:T[v])
        if(i!=p)
            f(i, v, gcd);
}

void F(int v = 1, int p = 0, int d = 0)
{
    for(int i = 0; i < divsn; ++i)
        if(A[v]%divs[i].first == 0)
            ++divs[i].second;
    for(auto i:divs)
        if(i.second >= d)
            ans[v] = max(ans[v], i.first);
    for(int i:T[v])
        if(i!=p)
            F(i, v, d+1);
    for(int i = 0; i < divsn; ++i)
        if(A[v]%divs[i].first == 0)
            --divs[i].second;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,a,b;
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    for(int i = 1; i < n; ++i)
    {
        cin>>a>>b;
        T[a].push_back(b);
        T[b].push_back(a);
    }
    ans[1] = A[1];
    for(int i:T[1])
        f(i, 1);
    for(int i = 1; i <= A[1]; ++i)
        if(A[1]%i == 0)
            divs.push_back(pii(i, 0));
    divsn = divs.size();
    F();
    for(int i = 1; i <= n; ++i)
        cout<<ans[i]<<' ';
    cout<<endl;
    return 0;
}
