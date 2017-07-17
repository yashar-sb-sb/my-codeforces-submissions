#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[12][12];
int dp[12][12];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(int i = 1; i <= 10; ++i)
        for(int j = 1; j <= 10; ++j)
            cin>>A[i][j];
    for(int i = 1; i <= 10; ++i)
    {
        for(int j = 1; j <= 10; ++j)
        {
            if(A[i][j] == '.')
            {
                A[i][j] = 'X';
                memset(dp, 0, sizeof(dp));
                for(int x = 1; x <= 10; ++x)
                {
                    for(int y = 1; y <= 10; ++y)
                    {
                        if(A[x][y] == 'X')
                            dp[x][y] = dp[x-1][y-1] + 1;
                        if(dp[x][y] == 5)
                            return cout<<"YES"<<endl, 0;
                    }
                }
                memset(dp, 0, sizeof(dp));
                for(int x = 1; x <= 10; ++x)
                {
                    for(int y = 1; y <= 10; ++y)
                    {
                        if(A[x][y] == 'X')
                            dp[x][y] = dp[x][y-1] + 1;
                        if(dp[x][y] == 5)
                            return cout<<"YES"<<endl, 0;
                    }
                }
                memset(dp, 0, sizeof(dp));
                for(int x = 1; x <= 10; ++x)
                {
                    for(int y = 1; y <= 10; ++y)
                    {
                        if(A[x][y] == 'X')
                            dp[x][y] = dp[x-1][y] + 1;
                        if(dp[x][y] == 5)
                            return cout<<"YES"<<endl, 0;
                    }
                }
                memset(dp, 0, sizeof(dp));
                for(int x = 1; x <= 10; ++x)
                {
                    for(int y = 1; y <= 10; ++y)
                    {
                        if(A[x][y] == 'X')
                            dp[x][y] = dp[x-1][y+1] + 1;
                        if(dp[x][y] == 5)
                            return cout<<"YES"<<endl, 0;
                    }
                }
                A[i][j] = '.';
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
