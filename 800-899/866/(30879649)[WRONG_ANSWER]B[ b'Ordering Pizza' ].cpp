#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<LL> A[100002];
LL S[100002];
LL Ha[100002];
LL Hb[100002];
LL n, s;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>s;
    for(int i = 1; i <= n; ++i)
    {
        LL si, ai, bi;
        cin>>si>>ai>>bi;
        A[i] = {bi-ai, ai, bi, si};
    }
    sort(A+1, A+n+1);
    for(int i = 1; i <= n; ++i)
    {
        Ha[i] = Ha[i-1] + A[i][1]*A[i][3];
        Hb[i] = Hb[i-1] + A[i][2]*A[i][3];
        S[i] = S[i-1] + A[i][3];
    }
    LL ans = max(Ha[n], Hb[n]);
    LL cur = 0;
    LL ind = 0;
    for(LL aa = 1; aa < S[n]/s+LL(bool(S[n]%s)); ++aa)
    {
        while(S[ind]<aa*s)
            ++ind;
        cur = Ha[ind-1] + Hb[n]-Hb[ind];
        cur += (aa*s-S[ind-1]) * A[ind][1];
        cur += (A[ind][3]-(aa*s-S[ind-1])) * A[ind][2];
        ans = max(ans, cur);
    }
    cout<<ans<<endl;
    return 0;
}
