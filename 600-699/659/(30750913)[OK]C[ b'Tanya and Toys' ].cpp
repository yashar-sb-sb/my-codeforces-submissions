#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

unordered_set<int> se;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, inp;
    cin>>n>>m;
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        se.insert(inp);
    }
    vector<int> ans;
    for(int i = 1; i <= m; ++i)
    {
        if(!se.count(i))
        {
            ans.push_back(i);
            m -= i;
        }
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
