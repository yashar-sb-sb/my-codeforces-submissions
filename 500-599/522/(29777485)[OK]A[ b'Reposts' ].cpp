#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<string, int> M;
string F[200];
string T[200];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    M["polycarp"] = 1;
    for(int i = 0; i < n; ++i)
        cin>>T[i]>>F[i]>>F[i];
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < int(T[i].size()); ++j)
            T[i][j] |= 32;
        for(int j = 0; j < int(F[i].size()); ++j)
            F[i][j] |= 32;
    }
    unsigned int ps = 0;
    while(ps!=M.size())
    {
        ps = M.size();
        for(int i = 0; i < n; ++i)
            if(M.find(F[i]) != M.end())
                M[T[i]] = 1 + M[F[i]];
    }
    int ans = 0;
    for(auto i: M)
        ans = max(ans, i.second);
    cout<<ans<<endl;
    return 0;
}
