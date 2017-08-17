#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string s;
int P[5001][5001];
int H[5001][5001];
int A[5001];
int mod = 1e9+7;
set<pii> se;
set<pii> te;
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
                se.insert(pii(l,r));
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
    for(int i = 2; i <= n && se.size(); ++i)
    {
        for(int l = 0; l < n; ++l)
        {
            for(int r = l + 1; r <= n; ++r)
            {
                int t = (r-l)/2;
                if(se.find(pii(l,l+t)) != se.end() && se.find(pii(r-t,r)) != se.end() && hsh(l,l+t) == hsh(r-t,r))
                {
                    te.insert(pii(l,r));
                }
            }
        }
        A[i-1] = se.size();
        swap(se, te);
        te.clear();
    }
    for(int i = 1; i <= n; ++i)
        cout<<A[i]<<' ';
    cout<<endl;
    return 0;
}
