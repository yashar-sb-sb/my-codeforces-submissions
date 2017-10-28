#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200002];
LL D[200002];
int n, k;

void relax()
{
    D[0] = A[0];
    for(int i = 0; i < n; ++i)
    {
        D[i+1] = A[i+1];
        if(D[i]<0)
        {
            D[i+1] += D[i];
            D[i] *= -1;
        }
        D[i+1] += D[i] / 2;
        D[i] %= 2;
    }
    if(D[n] < 0)
    {
        for(int i = 0; i <= n; ++i)
            A[i] *= -1;
        relax();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    for(int i = 0; i <= n; ++i)
        cin>>A[i];
    relax();
    int first = 0;
    for(; !D[first]; ++first);
    int last = n;
    LL cur = 0;
    int ans = 0;
    for(; last >= 0 && cur <= 2*k; --last)
    {
        cur = 2*cur + D[last];
        if(last<=first)
        {
            if(A[last] - cur >= LL(-k) && (A[last]!=cur || last != n))
                ++ans;
        }
    }
    cout<<ans<<endl;
    return 0;
}
