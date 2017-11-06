#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int T[300001];
int Q[300001];
LL A[300001];
LL B[300001];
LL S[1200009];

LL build(int id, int l, int r)
{
    if(l+1 == r)
        return S[id] = B[l];
    int idl = id<<1;
    int idr = idl|1;
    int mid = (l+r)>>1;
    return S[id] = min(build(idl, l, mid), build(idr, mid, r));
}

LL query(int id, int l, int r, int sl, int sr)
{
    if(sl >= r || sr <= l)
        return 1e18;
    if(l <= sl && sr <= r)
        return S[id];
    int idl = id<<1;
    int idr = idl|1;
    int mid = (sl+sr)>>1;
    return min(query(idl, l, r, sl, mid), query(idr, l, r, mid, sr));
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, a, b, c, d, start, len;
    cin>>n>>a>>b>>c>>d>>start>>len;
    A[0] = start;
    B[0] = start;
    for(int i = 1; i <= n; ++i)
        cin>>T[i]>>Q[i];
    for(int i = 1; i <= n; ++i)
    {
        if(Q[i])
        {
            A[i] = A[i-1] + a;
            B[i] = B[i-1] + c;
        }
        else
        {
            A[i] = A[i-1] - b;
            B[i] = B[i-1] - d;
        }
    }
    build(1, 1, n+1);
    int pointer = 1;
    T[0] = -1;
    for(int i = 1; i <= n; ++i)
    {
        if(A[i-1] < 0)
            return cout<<"-1\n", 0;
        while(pointer <= n && T[i-1]+1 + len > T[pointer])
            ++pointer;
        LL cur = A[i-1] + query(1, i, pointer, 1, n+1) - B[i-1];
        if(cur>=0)
            return cout<<T[i-1]+1<<endl, 0;
    }
    cout<<(A[n] < 0 ? -1 : T[n] + 1)<<endl;
    return 0;
}
