#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[100000], B[100000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, x, y;
    cin>>n>>m>>x>>y;
    for(int i = 0; i < n; ++i)
    {
        cin>>A[i].first;
        A[i].second = i+1;
    }
    for(int i = 0; i < m; ++i)
    {
        cin>>B[i].first;
        B[i].second = i+1;
    }
    sort(A, A+n);
    sort(B, B+m);
    int a, b;
    a = b = 0;
    vector<pii> ans;
    while(a < n && b < m)
    {
        if(A[a].first - x <= B[b].first && B[b].first <= A[a].first + y)
            ans.emplace_back(A[a++].second, B[b++].second);
        else if(A[a] < B[b])
            ++a;
        else
            ++b;
    }
    cout<<ans.size()<<'\n';
    for(auto i: ans)
        cout<<i.first<<' '<<i.second<<'\n';
    return 0;
}
