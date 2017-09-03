#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[10001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, inp, k;
    LL ans = 0;
    cin>>n>>k;
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        ++A[inp];
    }
    for(int i = 0; i <= 10000; ++i)
    {
        for(int j = i; j < 10001; ++j)
        {
            int pc = 0, mask = i^j;
            while(mask && pc <= k)
            {
                ++pc;
                mask ^= mask & -mask;
            }
            if(pc == k && LL(A[i]) * A[j])
            {
                if(i!=j)
                    ans += LL(A[i]) * A[j];
                else
                    ans += LL(A[i]) * (A[j]-1) / 2;
                cerr<<i<<' '<<j<<' '<<A[i]<<' '<<A[j]<<endl;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
