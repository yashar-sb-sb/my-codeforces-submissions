#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<int, vector<pii>> M;
vector<vector<pii>> V;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int c, s;
    for(int i = 1; i <= n; ++i)
    {
        cin>>c>>s;
        M[c].push_back(pii(s, i));
    }
    for(auto i:M)
        V.push_back(i.second);
    sort(V.begin(), V.end(), [](vector<pii> &i, vector<pii> &j){return i.size() < j.size();});
    n = V.size();
    for(int i = 0; i < int(V.size()); ++i)
        sort(V[i].begin(), V[i].end(), greater<pii>());
    vector<LL> sum(n);
    vector<int> ind(n);
    int from = 0;
    set<pair<LL, LL>> se;
    LL ma = 0, ind1, ind2;
    for(int i = 0; i < n; ++i)
    {
        se.erase({sum[i], i});
        if(from == i)
            ++from;
        for(int j = from; j < n; ++j)
        {
            se.erase({sum[j], j});
            while(ind[j] <= int(V[i].size())+1 && ind[j] < int(V[j].size()))
                sum[j] += V[j][ind[j]++].first;
            se.insert({sum[j], j});
            if(ind[j] == int(V[j].size()))
                from = j+1;
        }
        if(!se.size())
            break;
        for(; ind[i] < int(V[i].size()); ++ind[i])
            sum[i] += V[i][ind[i]].first;
        auto last = prev(se.end());
        if(last->first + sum[i] > ma)
        {
            ma = last->first + sum[i];
            ind1 = i;
            ind2 = last->second;
        }
    }
    vector<int> ans;
    LL height = 0;
    if(V[ind2].size() > V[ind1].size())
        swap(ind1, ind2);
    for(int i = 0; ; ++i)
    {
        if(i%2 && i/2 < int(V[ind2].size()))
        {
            height += V[ind2][i/2].first;
            ans.push_back(V[ind2][i/2].second);
        }
        else if(i%2 == 0 && i/2 < int(V[ind1].size()))
        {
            height += V[ind1][i/2].first;
            ans.push_back(V[ind1][i/2].second);
        }
        else
            break;
    }
    cout<<height<<endl<<ans.size()<<endl;
    for(int i:ans)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
