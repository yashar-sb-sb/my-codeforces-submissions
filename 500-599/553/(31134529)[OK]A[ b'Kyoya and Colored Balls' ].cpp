#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int bionomial[1001][1001];
int mod = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k;
    cin>>k;
    for(int i = 1; i <= 1000; ++i)
        for(int j = 0; j <= i; ++j)
            if(i == j || j == 0)
                bionomial[i][j] = 1;
            else
                bionomial[i][j] = (bionomial[i-1][j] + bionomial[i-1][j-1]) % mod;
    LL res = 1;
    int sum;
    cin>>sum;
    for(int i = 1; i < k; ++i)
    {
        int inp;
        cin>>inp;
        sum += inp;
        res = res * bionomial[sum-1][inp-1] % mod;
    }
    cout<<res<<endl;
    return 0;
}
