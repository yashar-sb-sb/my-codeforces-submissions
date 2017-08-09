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
    ldb pi = acos(-1);
    ldb x = (r==R ? pi : asin(r/(R-r)));
    cout<<(x*n <= pi + (1e-9) ? "YES" : "NO")<<endl;
    return 0;
}
