#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n, m, k;
char A[1002][1002];
int D[1002][1002];

class comp
{
    public:
        bool operator() (pii a, pii b)
        {
            return D[a.first][a.second] > D[b.first][b.second];
        }
};
priority_queue<pii, vector<pii>, comp> heap;

void go(int x, int y)
{
    int i;
    if(A[x][y] == '?')
        return;
    A[x][y] = '?';
    for(i = 1; i <= k && A[x][y+i] == '.' && D[x][y+i] > D[x][y]; ++i)
        D[x][y+i] = D[x][y] + 1;
    int xp = i;
    for(i = -1; i >= -k && A[x][y+i] == '.' && D[x][y+i] > D[x][y]; --i)
        D[x][y+i] = D[x][y] + 1;
    int xn = i;
    for(i = 1; i <= k && A[x+i][y] == '.' && D[x+i][y] > D[x][y]; ++i)
        D[x+i][y] = D[x][y] + 1;
    int yp = i;
    for(i = -1; i >= -k && A[x+i][y] == '.' && D[x+i][y] > D[x][y]; --i)
        D[x+i][y] = D[x][y] + 1;
    int yn = i;
    for(i = 1; i < xp; ++i)
        heap.emplace(x, y+i);
    for(i = -1; i > xn; --i)
        heap.emplace(x, y+i);
    for(i = 1; i < yp; ++i)
        heap.emplace(x+i, y);
    for(i = -1; i > yn; --i)
        heap.emplace(x+i, y);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m>>k;
    for(int i = 1; i <= n; ++i)
        cin>>(A[i]+1);
    memset(D, 127, sizeof(D));
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    D[x1][y1] = 0;
    heap.emplace(x1, y1);
    while(!heap.empty())
    {
        auto tmp = heap.top();
        heap.pop();
        go(tmp.first, tmp.second);
    }
    if(D[x2][y2] > 1e9)
        cout<<-1<<endl;
    else
        cout<<D[x2][y2]<<endl;
    return 0;
}
