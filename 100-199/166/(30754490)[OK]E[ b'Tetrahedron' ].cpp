#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int D[int(1e7+1)][4];
int mod = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    D[0][0] = 1;
    for(int i = 1; i <= n; ++i)
    {
        int sum = 0;
        for(int j = 0; j < 4; ++j)
            sum = (sum + D[i-1][j])%mod;
        for(int j = 0; j < 4; ++j)
            D[i][j] = ((sum - D[i-1][j])%mod+mod)%mod;
    }
    cout<<D[n][0]<<endl;
    return 0;
}
