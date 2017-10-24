#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

unordered_set<int> bad;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL b, q, l, m;
    int ans = 0;
    cin>>b>>q>>l>>m;
    for(int i = 0; i < m; ++i)
    {
        int inp;
        cin>>inp;
        bad.insert(inp);
    }
    for(int i = 0; i < 1000; ++i)
    {
        if(abs(b) > l)
            break;
        if(bad.count(b) == 0)
            ++ans;
        b *= q;
    }
    if(ans > 100)
        cout<<"inf"<<endl;
    else
        cout<<ans<<endl;
    return 0;
}
