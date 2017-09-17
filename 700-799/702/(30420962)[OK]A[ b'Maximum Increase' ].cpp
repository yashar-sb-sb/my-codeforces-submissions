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
    int c = 0, ans = 0;
    int p = 1e9+1;
    int cur;
    for(int i = 0; i < n; ++i)
    {
        cin>>cur;
        if(cur > p)
            ++c;
        else
            c = 1;
        p = cur;
        ans = max(ans, c);
    }
    cout<<ans<<endl;
    return 0;
}
