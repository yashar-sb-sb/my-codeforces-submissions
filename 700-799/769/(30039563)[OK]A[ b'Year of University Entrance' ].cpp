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
    cin>>n;
    int ans[n];
    for(int i = 0; i < n; ++i)
        cin>>ans[i];
    sort(ans, ans + n);
    cout<<ans[n/2]<<endl;
    return 0;
}
