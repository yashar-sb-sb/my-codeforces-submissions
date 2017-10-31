#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL x, y, l, r;
    cin>>x>>y>>l>>r;
    LL A = 1, B = 1;
    vector<LL> ve = {l-1, r+1};
    while(A<r)
    {
        B = 1;
        while(A+B <= r)
        {
            if(A+B >= l)
                ve.push_back(A+B);
            if(r/y < B)
                break;
            B*=y;
        }
        if(r/x < A)
            break;
        A *= x;
    }
    sort(ve.begin(), ve.end());
    LL ans = 0;
    for(int i = 1; i < int(ve.size()); ++i)
        ans = max(ans, ve[i] - ve[i-1]-1);
    cout<<ans<<endl;
    return 0;
}
