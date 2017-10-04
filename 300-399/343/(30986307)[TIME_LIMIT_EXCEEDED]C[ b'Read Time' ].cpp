#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n, m;
LL H[100000];
LL P[100000];

bool f(LL time)
{
    int p = 0;
    LL dist;
    vector<LL> v = {H[n/2], P[p], P[m-1]};
    sort(v.begin(), v.end());
    if(v[0] == H[n/2] || v[2] == H[n/2])
        dist = v[2] - v[0];
    else
        dist = v[2]-v[0] + min(v[2]-v[1], v[1]-v[0]);
    if(dist <= time)
        return true;
    for(int h = 0; h < n && p < m; ++h)
    {
        int next = p-1;
        do
        {
            vector<LL> v = {H[h], P[p], P[++next]};
            sort(v.begin(), v.end());
            if(v[0] == H[h] || v[2] == H[h])
                dist = v[2] - v[0];
            else
                dist = v[2]-v[0] + min(v[2]-v[1], v[1]-v[0]);
        }
        while(next < m && dist <= time);
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
    LL m = 1, l = -1, r;
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
