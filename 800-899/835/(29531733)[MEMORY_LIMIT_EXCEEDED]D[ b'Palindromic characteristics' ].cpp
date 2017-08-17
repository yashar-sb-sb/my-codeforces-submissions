#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string s;
int P[5001][5001];
int H[5001][5001];
int mod = 1e9+7;
set<pii> se[5001];
bool pal(int l, int r)
{
    if(P[l][r])
        return P[l][r] == 1;
    if(r-l < 2)
    {
        P[l][r] = 1;
        return true;
    }
    if(s[l] == s[r-1] && pal(l+1, r-1))
    {
        P[l][r] = 1;
        return true;
    }
    P[l][r] = -1;
    return false;
}
LL hsh(int l, int r)
{
    if(H[l][r] != -1)
        return H[l][r];
    if(r-l < 2)
    {
        if(l<r)
            H[l][r] = s[l];
        else
            H[l][r] = 0;
    }
    else
    {
        H[l][r] = (107LL * hsh(l+1, r-1) + 17 * s[l] + 19 * s[r-1]) % mod;
    }
    return H[l][r];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(H, -1, sizeof(H));
    cin>>s;
    int n = s.size();
//   for(int i = 0; i <= n; ++i)
//   {
//       for(int j = 0; j <= n; ++j)
//       {
//           cerr<<'\t'<<P[i][j];
//       }
//       cerr<<endl;
//   }
    for(int l = 0; l < n; ++l)
    {
        for(int r = l + 1; r <= n; ++r)
        {
            if(pal(l, r))
            {
                se[1].insert(pii(l,r));
            }
        }
    }
//   for(int i = 0; i <= n; ++i)
//   {
//       for(int j = 0; j <= n; ++j)
//       {
//           cerr<<'\t'<<P[i][j];
//       }
//       cerr<<endl;
//   }
    for(int i = 2; i <= n && se[i-1].size(); ++i)
    {
        cerr<<i<<endl;
        for(int l = 0; l < n; ++l)
        {
            for(int r = l + 1; r <= n; ++r)
            {
                int t = (r-l)/2;
                if(l == 0 && r == n)
                {
                    cerr<<hsh(l,l+t)<<' '<<hsh(r-t, r)<<endl;
                    cerr<<l<<r<<t<<endl;
                }
                if(se[i-1].find(pii(l,l+t)) != se[i-1].end() && se[i-1].find(pii(r-t,r)) != se[i-1].end() && hsh(l,l+t) == hsh(r-t,r))
                {
                    se[i].insert(pii(l,r));
                    cerr<<l<<' '<<r<<endl;
                }
            }
        }
    }
    for(int i = 1; i <= n; ++i)
        cout<<se[i].size()<<' ';
    cout<<endl;
    return 0;
}
