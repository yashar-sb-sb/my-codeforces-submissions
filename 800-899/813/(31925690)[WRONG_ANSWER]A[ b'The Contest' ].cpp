#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n;
    int sum = 0;
    int inp;
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        sum += inp;
    }
    cin>>m;
    for(int i = 0; i < n; ++i)
    {
        int l, r;
        cin>>l>>r;
        if(sum <= r)
            return cout<<max(l, sum)<<endl, 0;
    }
    cout<<"-1\n";
    return 0;
}
