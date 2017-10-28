#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int T[150001];
int I[150001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, q;
    cin>>n>>k>>q;
    for(int i = 1; i <= n; ++i)
        cin>>T[i];
    set<pii> se;
    while(q--)
    {
        int t, id;
        cin>>t>>id;
        if(t == 2)
            cout<<(I[id] ? "YES" : "NO")<<'\n';
        else
        {
            I[id] = 1;
            se.emplace(T[id], id);
            if(int(se.size()) > k)
            {
                I[se.begin()->second] = 0;
            }
        }
    }
    return 0;
}
