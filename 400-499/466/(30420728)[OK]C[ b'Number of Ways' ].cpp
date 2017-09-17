#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL A[500006];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
        cin>>A[i];
        A[i] += A[i-1];
    }
    LL ans = 0;
    if(A[n] % 3)
        return cout<<0<<endl, 0;
    LL su = A[n] / 3;
    int h = A[1] == su;
    for(int i = 2; i < n; ++i)
    {
        if(A[i] == su+su)
            ans += h;
        if(A[i] == su)
            ++h;
    }
    cout<<ans<<endl;
    return 0;
}
