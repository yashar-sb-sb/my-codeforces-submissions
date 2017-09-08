#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> C[1000001];
LL OC[1000001];
vector<int> F[1000001];
map<int,int> ma;
int n, m, k;
LL sum = 0;

void fun(int i)
{
    for(int j = 0; j < int(F[i].size()); ++j)
    {
        if(!ma.count(F[i][j]))
        {
            ma[F[i][j]] = C[i][j];
            sum += C[i][j];
        }
        else if(C[i][j]<ma[F[i][j]])
        {
            sum -= ma[F[i][j]] - C[i][j];
            ma[F[i][j]] = C[i][j];
        }
    }
    if(int(ma.size())==n)
        OC[i] = sum;
    else
        OC[i] = 1e15;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int d, f, t, c;
    cin>>n>>m>>k;
    for(int i = 0; i < m; ++i)
    {
        cin>>d>>f>>t>>c;
        f= max(f, t);
        F[d].push_back(f);
        C[d].push_back(c);
    }
    for(int i = 1000000; i >= 0; --i)
        fun(i);
    sum = 0;
    ma.clear();
    LL ans = 1e15;
    for(int i = 0; i < 1000000-k; ++i)
    {
        fun(i);
        ans = min(ans, OC[i]+OC[i+k+1]);
    }
    if(ans > 1e14)
        ans = -1;
    cout<<ans<<endl;
    return 0;
}
