#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int mod = 1e9+7;
int P[5001];
int A[5001];
int n, a, b, k;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, a, b, k;
    cin>>n>>a>>b>>k;
    if(a>b)
    {
        a -= b;
        n -= b;
    }
    else
    {
        n = b-1;
        a = b-a;
    }
    for(int i = 1; i <= n; ++i)
        A[i] = 1;
    for(int i = 0; i < k; ++i)
    {
        for(int j = 1; j <= n; ++j)
            P[j] = P[j-1] + A[j];
        for(int j = 1; j <= n; ++j)
            A[j] = P[min(n, j+j-1)] - P[j] + P[j-1];
    }
    cout<<A[a]<<endl;
    return 0;
}
