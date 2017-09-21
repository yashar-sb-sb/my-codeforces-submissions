#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[4][4];
int B[4][4];
LL Da[4][4];
LL Db[4][4];
LL Dd[4][4];
LL ap, bp, dp;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b;
    LL k;
    cin>>k>>a>>b;
    for(int i = 1; i < 4; ++i)
        for(int j = 1; j < 4; ++j)
            cin>>A[i][j];
    for(int i = 1; i < 4; ++i)
        for(int j = 1; j < 4; ++j)
            cin>>B[i][j];
    while(k)
    {
        if(Da[a][b] || Db[a][b] || Dd[a][b])
            break;
        --k;
        Da[a][b] = ap;
        Db[a][b] = bp;
        Dd[a][b] = dp;
        if(a==b)
            ++dp;
        else if(a == 3 && b == 1)
            ++bp;
        else if(a == 1 && b == 3)
            ++ap;
        else if(a > b)
            ++ap;
        else
            ++bp;
        int nb = B[a][b];
        a = A[a][b];
        b = nb;
    }
    if(k)
    {
        LL l = k / (ap+bp+dp-(Da[a][b]+Db[a][b]+Dd[a][b]));
        k %= (ap+bp+dp-(Da[a][b]+Db[a][b]+Dd[a][b]));
        ap += l * (ap-Da[a][b]);
        bp += l * (bp-Db[a][b]);
        dp += l * (dp-Dd[a][b]);
    }
    while(k)
    {
        --k;
        if(a==b)
            ++dp;
        else if(a == 3 && b == 1)
            ++bp;
        else if(a == 1 && b == 3)
            ++ap;
        else if(a > b)
            ++ap;
        else
            ++bp;
        int nb = B[a][b];
        a = A[a][b];
        b = nb;
    }
    cout<<ap<<' '<<bp<<endl;
    return 0;
}
