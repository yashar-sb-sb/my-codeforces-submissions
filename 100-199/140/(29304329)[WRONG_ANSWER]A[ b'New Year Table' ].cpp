#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    ldb n, R, r;
    cin>>n>>R>>r;
    ldb t = sin(180.0/n) * (R-r);
    if(n == 1)
        t = R;
    if(n == 2)
        t = R / 2.0;
    cout<<(r < t + (1e-9) ? "YES" : "NO")<<endl;
    return 0;
}
