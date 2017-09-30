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
    LL all = S[n]/s+LL(bool(S[n]%s));
    for(LL aa = 1; aa < all; ++aa)
    {
        while(S[ind]<aa*s)
            ++ind;
        cur = Ha[ind-1] + Hb[n]-Hb[ind];
        LL dd = (aa*s-S[ind-1]);
        cur += dd * A[ind][1];
        cur += (A[ind][3]-dd) * A[ind][2];
        ans = max(ans, cur);
    }
    for(ind = 1; ind <= n; ++ind)
    {
        cur = Ha[ind-1] + Hb[n]-Hb[ind];
        LL dd = 0;
        if(A[ind][0]<=0)
        {
            LL sa = S[ind-1];
            LL sb = S[n]-S[ind];
            sa = sa/s + LL(sa%s>0);
            sb = sb/s + LL(sb%s>0);
            if(sa+sb>all)
                continue;
            sa = all - sb;
            dd = min(A[ind][3], s*sa-S[ind-1]);
        }
        else
        {
            LL sa = S[ind-1];
            LL sb = S[n]-S[ind];
            sa = sa/s + LL(sa%s>0);
            sb = sb/s + LL(sb%s>0);
            if(sa+sb>all)
                continue;
            sb = all - sa;
            dd = A[ind][3] - min(A[ind][3], s*sb-S[n]+S[ind]);
        }
        cur += dd * A[ind][1];
        cur += (A[ind][3]-dd) * A[ind][2];
        ans = max(ans, cur);
    }
    cout<<ans<<endl;
    return 0;
}
