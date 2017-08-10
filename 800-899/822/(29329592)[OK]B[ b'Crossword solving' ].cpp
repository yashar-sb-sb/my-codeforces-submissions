#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    string s, t;
    cin>>s>>t;
    int mi = n+1;
    int ind = -1;
    for(int i = 0; i <= m - n; ++i)
    {
        int cur = 0;
        for(int j = 0; j < n; ++j)
        {
            cur += s[j] != t[i+j];
        }
        if(cur < mi)
            mi = cur,
            ind = i;
    }
    cout<<mi<<endl;
    for(int i = 0; i < n; ++i)
    {
        if(s[i] != t[i+ind])
            cout<<i+1 << ' ';
    }
    cout<<endl;
    return 0;
}
