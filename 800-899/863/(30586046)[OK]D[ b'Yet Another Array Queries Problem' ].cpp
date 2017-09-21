#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, q, m;
    cin>>n>>q>>m;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    vector<vector<int>> v;
    for(int i = 0; i < q; ++i)
    {
        vector<int> t(3);
        cin>>t[0]>>t[1]>>t[2];
        v.push_back(t);
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < m; ++i)
    {
        cin>>q;
        for(auto Q:v)
        {
            int t = Q[0];
            int l = Q[1];
            int r = Q[2];
            if(q<l || q>r)
                continue;
            if(t == 1)
            {
                --q;
                if(q == l-1)
                    q = r;
            }
            else
            {
                q = l+r-q;
            }
        }
        cout<<A[q]<<' ';
    }
    cout<<endl;
    return 0;
}
