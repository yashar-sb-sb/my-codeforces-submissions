#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n, m;
LL H[100000];
LL P[100000];

inline LL dist(LL h, LL p1, LL p2)
{
    vector<LL> v = {h, p1, p2};
    sort(v.begin(), v.end());
    if(v[0] == h || v[2] == h)
        return v[2] - v[0];
    return v[2]-v[0] + min(v[2]-v[1], v[1]-v[0]);
}

bool f(LL time)
{
    int p = 0;
    if(dist(H[n/2], P[0], P[m-1]) <= time)
        return true;
    for(int h = 0; h < n && p < m; ++h)
    {
        int next = p;
        while(next < m && dist(H[h], P[p], P[next]) <= time)
            ++next;
        p = next;
    }
    return p >= m;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(int i = 0; i < n; ++i)
        cin>>H[i];
    for(int i = 0; i < m; ++i)
        cin>>P[i];
    LL l = -1, r = 2*(max(H[n-1],P[m-1]) - min(H[0], P[0]));
    LL m = 1;
    while(!f(m))
    {
        l = m;
        m = m * 2;
    }
    r = m;
    while(l+1<r)
    {
        m = (l + r)/2;
        if(f(m))
            r = m;
        else
            l = m;
    }
    cout<<r<<endl;
    return 0;
}
