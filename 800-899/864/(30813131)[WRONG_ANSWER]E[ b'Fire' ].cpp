#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<vector<int>> V[2001];
int dp[2001];
set<int> IN[2001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        int t, d, p;
        cin>>t>>d>>p;
        V[d-1].push_back({t, p, i+1});
    }
    int ans = 0;
    for(int i = 1; i < 2001; ++i)
    {
        int t, d, p, ind;
        d = i;
        for(auto a:V[d])
        {
            t = a[0];
            p = a[1];
            ind = a[2];
            IN[i] = IN[i-1];
            dp[i] = dp[i-1];
            for(int j = d; j >= t; --j)
            {
                if(dp[j] < dp[j-t] + p)
                {
                    dp[j] = dp[j-t] + p;
                    IN[j] = IN[j-t];
                    IN[j].insert(ind);
                }
                if(dp[j] > dp[ans])
                    ans = j;
            }
        }
    }
    cout<<dp[ans]<<endl;
    cout<<IN[ans].size()<<endl;
    for(int i:IN[ans])
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
