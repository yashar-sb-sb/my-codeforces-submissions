#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n, k;
int ma = 0;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    int inp;
    for(int i = 0; i < k; ++i)
    {
        cin>>inp;
        ma = max(inp, ma);
    }
    cout<<(ma > n*4 ? "NO" : "YES")<<endl;
    return 0;
}
