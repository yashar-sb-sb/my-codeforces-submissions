#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;
typedef pair<string,int> psi;

vector<psi> ans;

int A[102][102];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin>>A[i][j];
    if(n<m)
    {
        for(int i = 1; i <= n; ++i)
        {
            int mi = 1000;
            for(int j = 1; j <= m; ++j)
                mi = min(A[i][j], mi);
            if(mi<=0)
                continue;
            for(int j = 1; j <= m; ++j)
                A[i][j] -= mi;
            while(mi--)
                ans.push_back(psi("row",i));
        }
        for(int j = 1; j <= m; ++j)
        {
            int mi = 1000;
            for(int i = 1; i <= n; ++i)
                mi = min(A[i][j], mi);
            if(mi<=0)
                continue;
            for(int i = 1; i <= n; ++i)
                A[i][j] -= mi;
            while(mi--)
                ans.push_back(psi("col",j));
        }
    }
    else
    {
        for(int j = 1; j <= m; ++j)
        {
            int mi = 1000;
            for(int i = 1; i <= n; ++i)
                mi = min(A[i][j], mi);
            if(mi<=0)
                continue;
            for(int i = 1; i <= n; ++i)
                A[i][j] -= mi;
            while(mi--)
                ans.push_back(psi("col",j));
        }
        for(int i = 1; i <= n; ++i)
        {
            int mi = 1000;
            for(int j = 1; j <= m; ++j)
                mi = min(A[i][j], mi);
            if(mi<=0)
                continue;
            for(int j = 1; j <= m; ++j)
                A[i][j] -= mi;
            while(mi--)
                ans.push_back(psi("row",i));
        }
    }
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(A[i][j])
                return cout<<-1<<endl, 0;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
            cerr<<A[i][j]<<'\t';
        cerr<<endl;
    }
    cout<<ans.size()<<'\n';
    for(psi i:ans)
        cout<<i.first<<' '<<i.second<<'\n';
    return 0;
}
