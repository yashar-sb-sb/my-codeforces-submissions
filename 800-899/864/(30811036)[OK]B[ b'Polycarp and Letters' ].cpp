#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<char> se;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 0 ; i < n; ++i)
    {
        char c;
        cin>>c;
        if(c & 32)
            se.insert(c);
        else
            se.clear();
        ans = max(ans, int(se.size()));
    }
    cout<<ans<<endl;
    return 0;
}
