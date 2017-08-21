#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char C[100001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    cin>>C;
    C[n] = '0';
    int l = 0, r = 0, f = 0, ans = n;
    while(C[l]!='0') ++ l;
    r = l;
    int d = 1;
    while(d <= k)
        d += C[++r] == '0';
    f = l;
    while(r < n)
    {
        int cur;
        do
        {
            cur = max(r - f, f - l);
            d = f;
            while(C[++f] == '1');
        }
        while(max(r-f, f - l)<cur);
        f = d;
        ans = min(ans, cur);
        while(C[++l] == '1');
        while(C[++r] == '1');
    }
    cout<<ans<<endl;
    return 0;
}
