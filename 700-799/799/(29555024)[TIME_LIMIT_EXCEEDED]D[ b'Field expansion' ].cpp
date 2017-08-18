#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b, h, w, n;
    cin>>a>>b>>h>>w>>n;
    if(a > b)
        swap(a,b);
    int ans = n + 1;
    if(min(h,w) >= a && max(h,w) >= b)
        ans = min(ans, 0);
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    sort(A, A+n, greater<int>());
    if(ans)
    for(int i = 0; i < 10000000; ++i)
    {
        int mask = i;
        LL H = h, W = w;
        for(int j = 0; mask && ans > j+1; ++j)
        {
            ((mask&1) ? H : W) *= A[j];
            if(min(H,W) >= a && max(H,W) >= b)
            {
                ans = min(ans, j + 1);
                break;
            }
            else if(!H || !W)
                break;
            mask >>= 1;
        }
    }
    if(ans == n+1)
        ans = -1;
    cout<<ans<<endl;
    return 0;
}
