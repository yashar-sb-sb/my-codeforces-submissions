#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, x;
    cin>>n>>x;
    x -= n-1;
    for(int i = 0; i < n; ++i)
    {
        int a;
        cin>>a;
        x -= a;
    }
    cout<<(!x ? "YES" : "NO")<<endl;
    return 0;
}
