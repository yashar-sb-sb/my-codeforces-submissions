#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];
map<int,int> ma;
vector<int> v;

map<pii, LL> dp;

LL C(int n, int k)
{
    if(dp.count(pii(n,k)))
        return dp[pii(n,k)];
    if(n==k || k==0)
        return dp[pii(n,k)] = 1;
    return dp[pii(n,k)] = C(n-1, k-1) + C(n-1, k);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n = 0;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    sort(A, A+n);
    ++ma[A[0]];
    ++ma[A[1]];
    ++ma[A[2]];
    for(int i = 3; i < n; ++i)
        if(A[i] == A[2])
            ++ma[A[2]];
    for(auto i:ma)
        v.push_back(i.second);
    v.push_back(0);
    v.push_back(0);
    int s = 0;
    for(int i = 0; i < 3; ++i)
    {
        if(s+v[i]>=3)
        {
            cout<<C(v[i], 3-s)<<endl;
            break;
        }
        s += v[i];
    }
    return 0;
}
