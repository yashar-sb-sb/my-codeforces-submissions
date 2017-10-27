#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100001];
bool vis[100001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    vector<int> lens;
    for(int i = 1; i <= n; ++i)
    {
        if(!vis[i])
        {
            int cur = i;
            int le = 0;
            while(!vis[cur])
            {
                ++le;
                vis[cur] = true;
                cur = A[cur];
            }
            lens.push_back(le);
        }
    }
    sort(lens.begin(), lens.end());
    if(lens.size()>1)
    {
        int le = lens.back();
        lens.pop_back();
        lens.back() += le;
    }
    LL ans = 0;
    for(LL i:lens)
        ans += i*i;
    cout<<ans<<endl;
    return 0;
}
