#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int dp['z' + 1][1501];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, q;
    string s;
    cin>>n>>s;
    cin>>q;
    int m;
    char c;
    while(q--)
    {
        cin>>m>>c;
        int save = m;
        if(!dp[int(c)][m])
        {
            int l = 0, r = 0;
            for(; r < n; ++r)
            {
                m -= s[r] != c;
                while(m<0)
                    if(s[l++] != c)
                        ++m;
                dp[int(c)][save] = max(dp[int(c)][save], r-l+1);
            }
        }
        cout<<dp[int(c)][save]<<'\n';
    }
    return 0;
}
