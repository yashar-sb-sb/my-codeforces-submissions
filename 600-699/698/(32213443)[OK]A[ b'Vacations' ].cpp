#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int D[101][4];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(D, 127, sizeof(D));
    int n, a;
    cin>>n;
    for(int i = 0; i < 4; ++i)
        D[0][i] = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin>>a;
        for(int j = 0; j < 4; ++j)
            if((j|a) == a)
                for(int k = 0; k < 4; ++k)
                    if((k&j) == 0)
                        D[i][j] = min(D[i][j], D[i-1][k] + (j==0));
    }
    int ans = 1e9;
    for(int i = 0; i < 4; ++i)
        ans = min(ans, D[n][i]);
    cout<<ans<<endl;
    return 0;
}
