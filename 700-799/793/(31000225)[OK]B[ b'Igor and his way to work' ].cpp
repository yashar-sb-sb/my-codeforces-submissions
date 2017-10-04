#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char M[1002][1002];

bool found;
void go(int x, int y, char c)
{
    int i;
    for(i = x+1; M[i][y] == '.'; ++i)
        M[i][y] = c;
    if(M[i][y] == 'T')
        found = true;
    for(i = x-1; M[i][y] == '.'; --i)
        M[i][y] = c;
    if(M[i][y] == 'T')
        found = true;
    for(i = y+1; M[x][i] == '.'; ++i)
        M[x][i] = c;
    if(M[x][i] == 'T')
        found = true;
    for(i = y-1; M[x][i] == '.'; --i)
        M[x][i] = c;
    if(M[x][i] == 'T')
        found = true;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
        cin>>(M[i]+1);
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(M[i][j] == 'S')
                go(i,j,'0');
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(M[i][j] == '0')
                go(i,j,'1');
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(M[i][j] == '1')
                go(i,j,'2');
    cout<<(found ? "YES" : "NO")<<endl;
    return 0;
}
