#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<LL, vector<pii>> M;
LL MAX[100003];
int color[100003];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int c, s;
    for(LL i = 1; i <= n; ++i)
    {
        cin>>c>>s;
        M[c].push_back(pii(s, i));
    }
    LL ma = 0;
    int ind1 = 0, ind2 = 0;
    for(auto &i:M)
    {
        LL cur = 0;
        sort(i.second.begin(), i.second.end(), greater<pii>());
        for(int j = 0; j < (int)i.second.size(); ++j)
        {
            cur += i.second[j].first;
            if(MAX[j] && MAX[j] + cur > ma)
            {
                ind1 = i.first;
                ind2 = color[j];
                ma = MAX[j] + cur;
            }
            if(MAX[j+1] && MAX[j+1] + cur > ma)
            {
                ind1 = i.first;
                ind2 = color[j+1];
                ma = MAX[j+1] + cur;
            }
            if(MAX[j+2] && MAX[j+2] + cur > ma)
            {
                ind1 = i.first;
                ind2 = color[j+2];
                ma = MAX[j+2] + cur;
            }
        }
        for(int j = 0; j < (int)i.second.size(); ++j)
        {
            cur += i.second[j].first;
            if(MAX[j+1] < cur)
            {
                MAX[j+1] = cur;
                color[j+1] = i.first;
            }
        }
    }
    LL height = 0;
    vector<LL> ans;
    if(M[ind2].size() > M[ind1].size())
        swap(ind1, ind2);
    for(LL i = 0; ; ++i)
    {
        if(i%2 && i/2 < LL(M[ind2].size()))
        {
            height += M[ind2][i/2].first;
            ans.push_back(M[ind2][i/2].second);
        }
        else if(i%2 == 0 && i/2 < LL(M[ind1].size()))
        {
            height += M[ind1][i/2].first;
            ans.push_back(M[ind1][i/2].second);
        }
        else
            break;
    }
    cout<<height<<endl<<ans.size()<<endl;
    for(LL i:ans)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
