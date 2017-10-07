#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200];
int B[200];
int DP[200][200][30*200];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    for(int i = 0; i < n; ++i)
    {
        LL inp;
        cin>>inp;
        while(inp%2==0)
        {
            ++B[i];
            inp /= 2;
        }
        while(inp%5==0)
        {
            ++A[i];
            inp /= 5;
        }
    }
    memset(DP, 128, sizeof(DP));
    for(int i = 0; i <= A[0]; ++i)
        DP[0][1][i] = B[0];
    for(int i = 1; i < n; ++i)
    {
        for(int j = 1; j <= k; ++j)
        {
            for(int l = 0; l < 6000; ++l)
            {
                DP[i][j][l] = DP[i-1][j][l];
                if(l-A[i]>=0)
                    DP[i][j][l] = max(DP[i][j][l], DP[i-1][j-1][l-A[i]]+B[i]);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < 6000; ++i)
    {
        ans = max(ans, min(i,DP[n-1][k][i]));
    }
    cout<<ans<<endl;
    return 0;
}
