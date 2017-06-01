#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100001];
int B[100001];
int n, s;

LL f(int k)
{
    for(int i = 1; i <= n; ++i)
        B[i] = A[i] + i * k;
    sort(B+1, B+n+1);
    LL ans = 0;
    for(int i = 1; i <= k; ++i)
        ans += B[i];
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>s;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    int l = 0, r = n + 1;
    int m;
    LL t;
    while(l+1<r)
    {
        m = (l + r) / 2;
        t = f(m);
        if(t <= s)
            l = m;
        else
            r = m;
    }
    t = f(l);
    cout<<l<<' '<<t<<endl;
    return 0;
}
