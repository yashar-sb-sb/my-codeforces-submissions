#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n;
int A[60000], V[60000];

bool f(ldb time)
{
    ldb ma = 0;
    ldb mi = 1e9+1;
    for(int i = 0; i < n; ++i)
    {
        ma = max(ma, A[i] - time*V[i]);
        mi = min(mi, A[i] + time*V[i]);
    }
    return ma <= mi;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    for(int i = 0; i < n; ++i)
        cin>>V[i];
    ldb l = 0, r = 1e9;
    ldb m;
    while(l+1e-9<r)
    {
        m = (l+r)/2;
        if(f(m))
            r = m;
        else
            l = m;
    }
    cout.precision(12);
    cout.setf(ios::fixed);
    cout<<(l+r)/2<<endl;
    return 0;
}
