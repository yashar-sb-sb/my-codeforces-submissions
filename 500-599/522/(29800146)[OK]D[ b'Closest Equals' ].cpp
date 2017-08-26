#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int parr[500005 + 1];
int A[500005 + 1];
map<int, int> last;
map<int, vector<pii>> intervals;

void ad(int ind, int val)
{
    while(ind>0)
    {
        parr[ind] = min(parr[ind], val);
        ind = ind - (ind & -ind);
    }
}

int mi(int ind)
{
    int ans = 1e9;
    while(ind<=500005)
    {
        ans = min(ans, parr[ind]);
        ind = ind + (ind & -ind);
    }
    return ans;
}

int ans[500005 + 1];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(parr, 127, sizeof(parr));
    int n, m, l, r;
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    for(int i = 0; i < m; ++i)
    {
        cin>>l>>r;
        intervals[r].push_back(pii(l,i));
    }
    for(int i = 1; i <= n; ++i)
    {
        if(last.count(A[i]))
            ad(last[A[i]], i - last[A[i]]);
        last[A[i]] = i;
        for(auto a: intervals[i])
        {
            ans[a.second] = mi(a.first);
            if(ans[a.second]>n)
                ans[a.second] = -1;
        }
    }
    for(int i = 0; i < m; ++i)
        cout<<ans[i]<<'\n';
    return 0;
}
