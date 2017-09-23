#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int dp[5001];
int A[5001];
int L[5001];
int F[5001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    unordered_set<int> se;
    for(int i = n; i; --i)
        if(!se.count(A[i]))
        {
            L[i] = 1;
            se.insert(A[i]);
        }
    se.clear();
    for(int i = 1; i <= n; ++i)
        if(!se.count(A[i]))
        {
            F[i] = 1;
            se.insert(A[i]);
        }
    for(int i = 1; i <= n; ++i)
    {
        se.clear();
        bool valid = true;
        int Xor = 0;
        for(int j = i; j; --j)
        {
            if(!se.count(A[j]))
            {
                Xor ^= A[j];
                se.insert(A[j]);
                if(!L[j])
                    valid = false;
            }
            if(F[j])
                se.erase(A[j]);
            if(!valid)
                break;
            if(!se.size())
                dp[i] = max(dp[i], dp[j-1] + Xor);
        }
        dp[i] = max(dp[i], dp[i-1]);
    }
    cout<<dp[n]<<endl;
    return 0;
}
