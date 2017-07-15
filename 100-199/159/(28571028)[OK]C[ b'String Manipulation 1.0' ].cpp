#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int A[26][200000 + 1];

void add(char ch, int ind, int val)
{
    while(ind<=200000)
    {
        A[ch-'a'][ind] += val;
        ind = ind + (ind & -ind);
    }
}

int sum(char ch, int ind)
{
    int ans = 0;
    while(ind>0)
    {
        ans += A[ch-'a'][ind];
        ind = ind - (ind & -ind);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k;
    cin>>k;
    string s;
    cin>>s;
    int sz = s.size();
    for(int i = 1; i <= k*sz; ++i)
        add(s[(i-1)%sz], i, 1);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        int p;
        char c;
        cin>>p>>c;
        int l = 0, r = sz*k;
        while(l+1<r)
        {
            int m = (l+r)/2;
            if(sum(c,m)>=p)
                r = m;
            else
                l = m;
        }
        add(c, r, -1);
    }
    int M[256];
    memset(M, 0, sizeof(M));
    for(int i = 1; i <= k*sz; ++i)
    {
        for(int c = 'a'; c <= 'z'; ++c)
        {
            if(sum(c, i) != M[c])
            {
                ++M[c];
                cout<<char(c);
            }
        }
    }
    cout<<endl;
    return 0;
}
