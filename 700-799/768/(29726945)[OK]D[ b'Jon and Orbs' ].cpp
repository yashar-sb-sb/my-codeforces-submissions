#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

#define MAX 10001
#define one ldb(1)
ldb dp[MAX+1][1002];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    ldb k;
    int q;
    cin>>k>>q;
    dp[0][0] = 1;
    ldb mi = std::numeric_limits<ldb>::min();
    for(int i = 0; i < MAX; ++i)
    {
        for(int j = 0; j <= k; ++j)
        {
            if(dp[i][j] < mi)
                dp[i][j] = 0;
            dp[i+1][j] += dp[i][j]*ldb(j)/k;
            dp[i+1][j+1] += dp[i][j]*(k-ldb(j))/k;
        }
        dp[i][1] = k-dp[i][0];
    }
    int kk = k+0.5;
    while(q--)
    {
        ldb cur;
        cin>>cur;
        cur = (cur - ldb(1e-9))/ldb(2000);
        int l = 0, r = MAX-1;
        while(l+1<r)
        {
            int m = (l+r)/2;
            if(dp[m][kk]<cur)
                l = m;
            else
                r = m;
        }
        cout<<r<<'\n';
    }
    return 0;
}
