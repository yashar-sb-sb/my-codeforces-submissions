#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char M[502][502];
bool S[502][502];
int n, m, k;

void f(int x, int y)
{
    if(S[x][y] || M[x][y] != '.')
        return;
    S[x][y] = true;
    if(k)
        --k;
    else
        M[x][y] = 'X';
    f(x-1, y);
    f(x+1, y);
    f(x, y+1);
    f(x, y-1);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m>>k;
    k = n*m-k;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
        {
            cin>>M[i][j];
            k -= M[i][j] == '#';
        }
    cerr<<k<<endl;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(M[i][j] == '.')
            {
                f(i, j);
                break;
            }
    for(int i = 1; i <= n; ++i)
        cout<<M[i]+1<<'\n';
    return 0;
}
