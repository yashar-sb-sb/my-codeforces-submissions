#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<pii> S, P;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k, n;
    cin>>n>>k;
    ldb res = 0;
    for(int i = 0; i < n; ++i)
    {
        int c, t;
        cin>>c>>t;
        res += c;
        if(t == 1)
            S.emplace_back(c, i+1);
        else
            P.emplace_back(c, i+1);
    }
    sort(S.begin(), S.end(), greater<pii>());
    vector<int> ans[k];
    if(int(S.size()) < k)
    {
        for(int i = 0; i < int(S.size()); ++i)
        {
            ans[i].push_back(S[i].second);
            res -= S[i].first/ldb(2);
        }
        int ind = S.size();
        for(int i = 0; i < int(P.size()); ++i)
        {
            while(ans[ind].size() && ind < k-1)
                ++ind;
            ans[ind].push_back(P[i].second);
        }
    }
    else
    {
        for(int i = 0; i < k; ++i)
        {
            ans[i].push_back(S[i].second);
            res -= S[i].first/ldb(2);
        }
        res += S[k-1].first/ldb(2);
        int mi = S[k-1].first;
        for(int i = k; i < int(S.size()); ++i)
        {
            ans[k-1].push_back(S[i].second);
            mi = min(mi, S[i].first);
        }
        for(pii i: P)
        {
            ans[k-1].push_back(i.second);
            mi = min(mi, i.first);
        }
        res -= mi/ldb(2);
    }
    cout.precision(1);
    cout.setf(ios::fixed);
    cout<<res<<'\n';
    for(int i = 0; i < k; ++i)
    {
        cout<<ans[i].size();
        for(int j:ans[i])
            cout<<' '<<j;
        cout<<'\n';
    }
    return 0;
}
