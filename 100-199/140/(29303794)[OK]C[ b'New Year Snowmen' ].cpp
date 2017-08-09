#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, inp;
    cin>>n;
    map<int, int> m;
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        ++m[inp];
    }
    set<pii> A;
    for(auto i: m)
        A.insert(pii(i.second, i.first));
    vector<vector<int>> ans;
    while(A.size()>2)
    {
        vector<pii> cur;
        for(int i = 0; i < 3; ++i)
        {
            cur.push_back(*A.rbegin());
            A.erase(cur.back());
        }
        for(auto i:cur)
            if(i.first>1)
                A.insert(pii(i.first-1, i.second));
        ans.push_back({});
        for(auto i:cur)
            ans.back().push_back(i.second);
        sort(ans.back().begin(), ans.back().end(), greater<int>());
    }
    cout<<ans.size()<<'\n';
    for(auto i:ans)
    {
        for(auto j:i)
            cout<<j<<' ';
        cout<<'\n';
    }
    return 0;
}
