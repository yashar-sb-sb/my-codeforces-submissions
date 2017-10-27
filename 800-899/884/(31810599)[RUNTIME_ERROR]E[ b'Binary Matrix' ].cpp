#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int parr[27000];

int root(int v){return parr[v] < 0 ? v : (parr[v] = root(parr[v]));}
void merge(int x,int y){
    if((x = root(x)) == (y = root(y)))return;
    parr[x] += parr[y];
    parr[y] = x;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    int ans = 0;
    vector<int> P(m, -1), C(m);
    for(int i = 0; i < n; ++i)
    {
        memset(parr, -1, sizeof(parr));
        for(int j = 0; j < m/4; ++j)
        {
            char cha;
            cin>>cha;
            if(cha > '9')
                cha -= 'A' - '9' -1;
            cha -= '0';
            C[j*4] = cha&8;
            C[j*4+1] = cha&4;
            C[j*4+2] = cha&2;
            C[j*4+3] = cha&1;
        }
        for(int j = 1; j < m; ++j)
            if(C[j] && C[j-1])
                merge(j-1, j);
        for(int j = 0; j < m; ++j)
            if(P[j]>=0 && C[j])
                merge(j, m+P[j]);
        unordered_set<int> se;
        for(int j = 0; j < m; ++j)
        {
            if(P[j]>=0 && parr[root(m+P[j])] == -1)
                se.insert(P[j]);
        }
        ans += se.size();
        for(int j = 0; j < m; ++j)
            if(C[j])
                P[j] = root(j);
            else
                P[j] = -1;
    }
    {
        memset(parr, -1, sizeof(parr));
        for(int i = 0; i < m; ++i)
            C[i] = 0;
        for(int j = 1; j < m; ++j)
            if(C[j] && C[j-1])
                merge(j-1, j);
        for(int j = 0; j < m; ++j)
            if(P[j]>=0 && C[j])
                merge(j, m+P[j]);
        unordered_set<int> se;
        for(int j = 0; j < m; ++j)
        {
            if(P[j]>=0 && parr[root(m+P[j])] == -1)
                se.insert(P[j]);
        }
        ans += se.size();
        for(int j = 0; j < m; ++j)
            if(C[j])
                P[j] = root(j);
            else
                P[j] = -1;
    }
    cout<<ans<<endl;
    return 0;
}
