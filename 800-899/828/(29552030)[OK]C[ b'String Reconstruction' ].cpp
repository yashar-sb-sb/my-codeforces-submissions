#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string s[100000];
vector<pii> sweep;
set<pii> se;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>s[i];
        int m;
        cin>>m;
        for(int j = 0; j < m; ++j)
        {
            int inp;
            cin>>inp;
            sweep.push_back(pii(inp, i));
            sweep.push_back(pii(inp+s[i].size(), i));
        }
    }
    sort(sweep.begin(), sweep.end());
    int ind = 0;
    for(int i = 1; ind < int(sweep.size()); ++i)
    {
        while(ind < int(sweep.size()) && sweep[ind].first == i)
        {
            auto x = se.find(pii(sweep[ind].first - s[sweep[ind].second].size(), sweep[ind].second));
            if(x == se.end())
                se.insert(sweep[ind]);
            else
                se.erase(pii(sweep[ind].first - s[sweep[ind].second].size(), sweep[ind].second));
            ++ind;
        }
        if(ind == int(sweep.size()))
            break;
        if(se.empty())
            cout<<'a';
        else
        {
            auto x = se.begin();
            cout<<s[x->second][i-x->first];
        }
    }
    cout<<endl;
    return 0;
}
