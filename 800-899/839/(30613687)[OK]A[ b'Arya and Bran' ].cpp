#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    int sum = 0;
    int a;
    for(int i = 1; i <= n; ++i)
    {
        cin>>a;
        sum += a;
        k -= min(8, sum);
        sum -= min(8, sum);
        if(k<=0)
            return cout<<i<<endl, 0;
    }
    cout<<-1<<endl;
    return 0;
}
