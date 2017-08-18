#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, a, b, inp;
    int ans = 0, c = 0;
    cin>>n>>a>>b;
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        if(inp == 1)
        {
            if(a)
                --a;
            else if(b)
                --b, ++c;
            else if(c)
                --c;
            else
                ++ans;
        }
        else if(b)
            --b;
        else
            ans += 2;
    }
    cout<<ans<<endl;
    return 0;
}
