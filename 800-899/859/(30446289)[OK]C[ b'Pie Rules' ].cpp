#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100];
int dp[100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    int sum = 0;
    for(int i = n-1; i >= 0; --i)
    {
        sum += A[i];
        dp[i] = max(sum-dp[i+1], dp[i+1]);
    }
    cout<<sum-dp[0]<<' '<<dp[0]<<endl;
    return 0;
}
