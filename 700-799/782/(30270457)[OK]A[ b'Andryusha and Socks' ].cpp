#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    unordered_set<int> se;
    int n;
    cin>>n;
    int inp;
    int ans = 0;
    for(int i = 0; i < 2*n; ++i)
    {
        cin>>inp;
        if(se.count(inp))
            se.erase(inp);
        else
            se.insert(inp);
        ans = max(ans, int(se.size()));
    }
    cout<<ans<<endl;
    return 0;
}
