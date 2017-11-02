#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

//[-1 0]
//[1  2]
LL mat[2][2] = {{-1,0}, {1, 2}};

void f(LL e)
{
    LL ans[2][2] = {{0,0},
                    {0,0}};
    LL p[2][2];
    memcpy(p, mat, sizeof(mat));
    while(e)
    {
        if(e&1)
        {
            for(int i = 0; i < 2; ++i)
                for(int j = 0; j < 2; ++j)
                    ans[i][j] += p[i][j];
        }
        LL tmp[2][2];
        memcpy(tmp, p, sizeof(mat));
        for(int i = 0; i < 2; ++i)
            for(int j = 0; j < 2; ++j)
            {
                p[i][j] = 0;
                for(int k = 0; k < 2; ++k)
                    p[i][j] += tmp[i][k] * tmp[k][j];
            }
        e >>= 1;
    }
    memcpy(mat, ans, sizeof(mat));
    LL g = __gcd(mat[1][1], __gcd(mat[1][0], __gcd(mat[0][0], mat[0][1])));
    for(int i = 0; i < 2; ++i)
        for(int j = 0; j < 2; ++j)
            mat[i][j]/=g;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k;
    cin>>k;
    LL inp;
    while(k--)
    {
        cin>>inp;
        f(inp);
    }
    LL a = mat[0][0]+mat[1][0];
    LL b = mat[0][1]+mat[1][1];
    LL g = __gcd(a, b);
    a /= g;
    b /= g;
    cout<<a<<'/'<<b<<endl;
    return 0;
}
