#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, k;
    cin>>n>>m>>k;
    int l = 0, r = 0;
    m -= n;
    int ans = 1;
    while(m > l + r)
    {
        bool f = true;
        m -= 1 + l + r;
        ++ans;
        if(l < k - 1)
        {
            ++l;
            f = false;
        }
        if(k + r < n)
        {
            ++r;
            f = false;
        }
        if(f)
            break;
    }
    cout<<ans + m/(1+l+r)<<endl;
    return 0;
}
