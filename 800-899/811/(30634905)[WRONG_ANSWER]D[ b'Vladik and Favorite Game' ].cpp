#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int x = 1, y = 1;

char M[102][102];
int D[102][102];

int flipUD = 2, flipLR = 2;

void go(int dx, int dy)
{
    if(dx)
    {
        if(flipUD == 2)
        {
            cout<<'U'<<endl;
            cin>>x>>y;
            flipUD = x != 1;
            return;
        }
        if(flipUD)
            dx *= -1;
    }
    else
    {
        if(flipLR == 2)
        {
            cout<<'L'<<endl;
            cin>>x>>y;
            flipLR = y != 1;
            return;
        }
        if(flipLR)
            dy *= -1;
    }
    char d;
    if(dx == -1)
        d = 'U';
    else if(dx == 1)
        d = 'D';
    else if(dy == -1)
        d = 'L';
    else
        d = 'R';
    cout<<d<<endl;
    cin>>x>>y;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin>>M[i][j];
    if(M[x-1][y] != '*' && M[x+1][y] != '*')
    {
        go(1,0);
        while(M[x][y] != 'F' && (M[x][y-1] == '*' || M[x][y+1] == '*'))
            go(1, 0);
        if(M[x][y] != 'F')
            go(0,1);
    }
    else
    {
        go(0,1);
        while(M[x][y] != 'F' && (M[x-1][y] == '*' || M[x+1][y] == '*'))
            go(0,1);
        if(M[x][y] != 'F')
            go(1,0);
    }
    memset(D, 127, sizeof(D));
    int fx, fy;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            if(M[i][j] == 'F')
                fx = i, fy = j;
    D[fx][fy] = 0;
    queue<pii> q;
    q.push(pii(fx,fy));
    while(!q.empty())
    {
        fx = q.front().first;
        fy = q.front().second;
        q.pop();
        if(M[fx-1][fy] == '.')
        {
            if(D[fx-1][fy] > D[fx][fy])
            {
                D[fx-1][fy] = D[fx][fy] + 1;
                q.push(pii(fx-1, fy));
            }
        }
        if(M[fx+1][fy] == '.')
        {
            if(D[fx+1][fy] > D[fx][fy])
            {
                D[fx+1][fy] = D[fx][fy] + 1;
                q.push(pii(fx+1, fy));
            }
        }
        if(M[fx][fy-1] == '.')
        {
            if(D[fx][fy+1] > D[fx][fy])
            {
                D[fx][fy+1] = D[fx][fy] + 1;
                q.push(pii(fx, fy+1));
            }
        }
        if(M[fx][fy+1] == '.')
        {
            if(D[fx][fy+1] > D[fx][fy])
            {
                D[fx][fy+1] = D[fx][fy] + 1;
                q.push(pii(fx, fy+1));
            }
        }
    }
    while(D[x][y])
    {
        if(D[x-1][y] < D[x][y])
            go(-1,0);
        else if(D[x+1][y] < D[x][y])
            go(1,0);
        else if(D[x][y+1] < D[x][y])
            go(0,1);
        else
            go(0,-1);
    }
    return 0;
}
