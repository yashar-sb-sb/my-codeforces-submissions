#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string s;
int P[5001][5001];
int Pa[5001][5001];
int A[5001];
int mod = 1e9+7;

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

int Pal(int l, int r)
{
    if(Pa[l][r] != -1)
        return Pa[l][r];
    if(!pal(l,r) || l >= r)
        return Pa[l][r] = 0;
    return Pa[l][r] = Pal(l, (l + r)/2) + 1;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(Pa, -1, sizeof(Pa));
    cin>>s;
    int n = s.size();
    for(int l = 0; l < n; ++l)
        for(int r = l + 1; r <= n; ++r)
            ++A[Pal(l, r)];
    for(int i = n-1; i > 0; --i)
        A[i] += A[i+1];
    for(int i = 1; i <= n; ++i)
        cout<<A[i]<<' ';
    cout<<endl;
    return 0;
}
