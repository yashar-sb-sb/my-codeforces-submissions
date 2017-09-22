#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    pii cu, ne;
    int ans = 1, p = -1e9;
    cin>>cu.first>>cu.second;
    for(int i = 1; i < n; ++i)
    {
        cin>>ne.first>>ne.second;
        if(cu.first-cu.second>p)
        {
            p = cu.first;
            ++ans;
        }
        else if(cu.first+cu.second<ne.first)
        {
            ++ans;
            p = cu.first+cu.second;
        }
        cu = ne;
    }
    cout<<ans<<endl;
    return 0;
}
