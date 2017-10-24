#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, inp;
    cin>>n>>k;
    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        sum += inp;
    }
    cout<<max(0, (2*k-1)*n - 2*sum)<<endl;
    return 0;
}
