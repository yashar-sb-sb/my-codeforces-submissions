#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int K[100];
int F[100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < m; ++i)
    {
        cin>>K[i]>>F[i];
        if(n == K[i])
            return cout<<F[i]<<endl, 0;
    }
    int ans = -1;
    for(int s = 1; s <= 100; ++s)
    {
        for(int i = 0; i < m; ++i)
            if((K[i]-1)/s!=F[i]-1)
                goto next;
        if(ans>0 && (n-1)/s+1 != ans)
        {
            ans = -1;
            break;
        }
        ans = (n-1)/s+1;
        next:;
    }
    cout<<ans<<endl;
    return 0;
}
