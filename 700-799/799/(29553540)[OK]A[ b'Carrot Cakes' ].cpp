#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, t, k, d;
    cin>> n>> t>> k>> d;
    int ans = 0;
    while(n>0)
    {
        ans += t;
        n -= k;
    }
    cout<<(d<ans-t ? "YES" : "NO")<<endl;
    return 0;
}
