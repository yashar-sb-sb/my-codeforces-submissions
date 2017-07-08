#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[52][52];
pii M[3000];

void f(int x, int y, int num)
{
    if(A[x][y] != -1)
        return;
    A[x][y] = num;
    if(num>0)++M[num].first;
    f(x-1,y,num);
    f(x+1,y,num);
    f(x,y-1,num);
    f(x,y+1,num);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, k;
    char c;
    cin>>n>>m>>k;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            cin>>c;
            if(c=='.')
                A[i][j] = -1;
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            if(i == 1 || j == 1 || i == n || j == m)
                f(i,j,-2);
        }
    }
    int ind = 0;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            if(A[i][j] == -1)
                f(i,j,++ind);
        }
    }
    for(int i = 1; i <= ind; ++i)
        M[i].second = i;
    sort(M+1,M+ind+1);
    int count = 0;
    set<int> se;
    for(int i = 1; i <= ind-k; ++i)
    {
        se.insert(M[i].second);
    }
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            if(se.find(A[i][j]) != se.end())
            {
                A[i][j] = 0;
                ++count;
            }
        }
    }
    cout<<count<<'\n';
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
            cout<<(A[i][j] ? '.' : '*');
        cout<<'\n';
    }
    return 0;
}
