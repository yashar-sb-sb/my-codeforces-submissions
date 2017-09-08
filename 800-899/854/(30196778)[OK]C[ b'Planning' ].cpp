#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<pii> se;
int A[300001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    int inp;
    int i = 1;
    LL ans = 0;
    for(; i <= k; ++i)
    {
        cin>>inp;
        se.insert(pii(inp, i));
    }
    for(i = k+1; i <= n; ++i)
    {
        cin>>inp;
        se.insert(pii(inp, i));
        A[se.rbegin()->second] = i;
        ans += se.rbegin()->first * LL(i-se.rbegin()->second);
        se.erase(prev(se.end()));
    }
    while(!se.empty())
    {
        A[se.rbegin()->second] = i;
        ans += se.rbegin()->first * LL(i-se.rbegin()->second);
        se.erase(prev(se.end()));
        ++i;
    }
    cout<<ans<<endl;
    for(int i = 1; i <= n; ++i)
        cout<<A[i]<<' ';
    cout<<endl;
    return 0;
}
