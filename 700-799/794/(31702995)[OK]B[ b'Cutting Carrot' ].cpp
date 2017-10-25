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
    ldb h;
    cin>>n>>h;
    cout.precision(12);
    cout.setf(ios::fixed);
    for(int i = 1; i < n; ++i)
    {
        ldb t = i/ldb(n);
        cout<<h*sqrt(t)<<' ';
    }
    return 0;
}
