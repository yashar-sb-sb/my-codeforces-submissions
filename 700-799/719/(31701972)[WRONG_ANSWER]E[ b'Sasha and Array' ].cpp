#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int mod = 1e9+7;

int S[500000][2][2];
LL L[1000000];

void mul(int A[2][2], int B[2][2])
{
    int C[2][2];
    memset(C, 0, sizeof(C));
    for(int i = 0; i < 2; ++i)
        for(int j = 0; j < 2; ++j)
            for(int k = 0; k < 2; ++k)
                C[i][j] = (C[i][j] + LL(A[i][k]) * B[k][j]) % mod;
    memcpy(A, C, sizeof(C));
}

void pow(int A[2][2], LL count)
{
    if(count == 0)
    {
        A[0][0] = A[1][1] = 1;
        A[0][1] = A[1][0] = 0;
        return;
    }
    int B[2][2];
    pow(B, count/2);
    mul(B, B);
    if(count & 1)
    {
        int C[2][2];
        C[0][0] = C[0][1] = C[1][0] = 1;
        C[1][1] = 0;
        mul(B, C);
    }
    memcpy(A, B, sizeof(B));
}

void advance(int A[2][2], LL count)
{
    int B[2][2];
    int C[2][2];
    memset(C, 0, sizeof(C));
    pow(B, count);
    for(int i = 0; i < 2; ++i)
        for(int j = 0; j < 2; ++j)
            for(int k = 0; k < 2; ++k)
                C[i][j] = (C[i][j] + LL(A[i][k]) * B[k][j]) % mod;
    memcpy(A, C, sizeof(C));
}

void build(int l, int r, int id = 1)
{
    if(l+1 == r)
    {
        S[id][0][0] = S[id][1][1] = 1;
        return;
    }
    int idl = id<<1;
    int idr = idl+1;
    int mid = (l+r)>>1;
    build(l, mid, idl);
    build(mid, r, idr);
    for(int i = 0; i < 4; ++i)
        S[id][i%2][i/2] = (S[idr][i%2][i/2] + S[idl][i%2][i/2]) % mod;
}

void shift(int id)
{
    advance(S[id], L[id]);
    int idl = id<<1;
    L[idl] += L[id];
    L[idl+1] += L[id];
    L[id] = 0;
}

void add(int l, int r, int sl, int sr, int much, int id = 1)
{
    if(r<=sl || l>=sr)
        return;
    if(l<=sl && sr<=r)
    {
        L[id] += much;
        shift(id);
        return;
    }
    int idl = id<<1;
    int idr = idl+1;
    int mid = (sl+sr)>>1;
    shift(id);
    add(l, r, sl, mid, much, idl);
    add(l, r, mid, sr, much, idr);
    for(int i = 0; i < 4; ++i)
        S[id][i%2][i/2] = (S[idr][i%2][i/2] + S[idl][i%2][i/2]) % mod;
}

int get(int l, int r, int sl, int sr, int id = 1)
{
    if(r<=sl || l>=sr)
        return 0;
    shift(id);
    if(l<=sl && sr<=r)
        return S[id][0][1];
    int idl = id<<1;
    int idr = idl+1;
    int mid = (sl+sr)>>1;
    return (get(l, r, sl, mid, idl) + 
            get(l, r, mid, sr, idr)) % mod;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    int inp;
    build(1, n+1);
    for(int i = 1; i <= n; ++i)
    {
        cin>>inp;
        add(i, i+1, 1, n+1, inp);
    }
    for(int i = 0; i < m; ++i)
    {
        int t, l, r, x;
        cin>>t>>l>>r;
        if(t == 1)
        {
            cin>>x;
            add(l,r+1, 1, n+1, x);
        }
        else
            cout<<get(l, r+1, 1, n+1)<<'\n';
    }
    return 0;
}
