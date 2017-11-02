#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[501][501];
int R[501][501];
int C[501][501];
int n, m;
int ans = -1e9;

void doForCenter_s(int x, int y)
{
    int xmi = x-1, xma = x+1, ymi = y-1, yma = y+1;
    int sum = A[x][y+1]
            + A[x-1][y+1]
            + A[x+1][y-1]
            + A[x+1][y]
            + A[x+1][y+1];
    while(1)
    {
        sum += R[xmi][yma-1]-R[xmi][ymi-1];
        ans = max(ans, sum);
        ymi -= 2;
        //left
        if(ymi<1)
            break;
        sum += A[xmi][ymi]+A[xmi][ymi+1];
        xma += 2;
        //down
        if(xma>n)
            break;
        sum += C[xma][ymi]-C[xmi][ymi];
        yma += 2;
        //right
        if(yma>m)
            break;
        sum += R[xma][yma]-R[xma][ymi];
        xmi -= 2;
        //up
        if(xmi<1)
            break;
        sum += C[xma-1][yma]-C[xmi-1][yma];
    }
}


void doForCenter_l(int x, int y)
{
    int xmi = x-2, xma = x+2, ymi = y-2, yma = y+2;
    int sum = R[x][y]-R[x][ymi-1]
            + R[xma][yma]-R[xma][ymi-1]
            + C[xma-1][yma]-C[xmi-1][yma]
            + A[x+1][y-2];
    while(1)
    {
        sum += R[xmi][yma-1]-R[xmi][ymi-1];
        ans = max(ans, sum);
        ymi -= 2;
        //left
        if(ymi<1)
            break;
        sum += A[xmi][ymi]+A[xmi][ymi+1];
        xma += 2;
        //down
        if(xma>n)
            break;
        sum += C[xma][ymi]-C[xmi][ymi];
        yma += 2;
        //right
        if(yma>m)
            break;
        sum += R[xma][yma]-R[xma][ymi];
        xmi -= 2;
        //up
        if(xmi<1)
            break;
        sum += C[xma-1][yma]-C[xmi-1][yma];
    }
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin>>A[i][j];
    for(int r = 1; r <= n; ++r)
        for(int c = 1; c <= m; ++c)
        {
            R[r][c] = C[r][c] = A[r][c];
            R[r][c] += R[r][c-1];
            C[r][c] += C[r-1][c];
        }
    for(int i = 2; i < n; ++i)
        for(int j = 2; j < m; ++j)
            doForCenter_s(i,j);
    for(int i = 3; i < n-1; ++i)
        for(int j = 3; j < m-1; ++j)
            doForCenter_l(i,j);
    cout<<ans<<endl;
    return 0;
}
