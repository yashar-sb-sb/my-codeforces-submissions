#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> primes;
int A[int(5e5)];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, x, y;
    cin>>n>>x>>y;
    for(int i = 2; i < 1000000; ++i)
    {
        bool prime = true;
        for(auto p: primes)
            if(i%p == 0)
            {
                prime = false;
                break;
            }
        if(prime)
            primes.push_back(i);
    }
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    LL ans = x*LL(n);
    for(int p:primes)
    {
        LL cur = 0;
        for(int i = 0; i < n && cur < ans; ++i)
            cur += min(LL(y)*((p-A[i]%p)%p), LL(x));
        ans = min(ans, cur);
    }
    cout<<ans<<endl;
    return 0;
}
