#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<pii> A;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, p, a, b;
    cin>>n>>p;
    A.reserve(n);
    LL sum = 0;
    for(int i = 0; i < n; ++i)
    {
        cin>>a>>b;
        A.emplace_back(a,b);
        sum += a;
    }
    if(sum<=p)
        return cout<<-1<<endl, 0;
    ldb l = 0, r = 1e15, eps = 1e-7, m, S;
    while(r-l > eps)
    {
        m = (l+r)/ldb(2);
        S = 0;
        for(pii I: A)
            S += max(ldb(0), m*I.first - I.second);
        if(S<p*m)
            l = m;
        else
            r = m;
    }
    m = (l+r)/ldb(2);
    cout.precision(10);
    cout.setf(ios::fixed);
    cout<<m<<endl;
    return 0;
}
