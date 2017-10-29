#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n;
int A[int(2e5)];

ldb f(ldb x)
{
    ldb mi = 0, ma = 0, cur = 0, ans = 0;
    for(int i = 0; i < n; ++i)
    {
        cur += A[i] -x;
        mi = min(mi, cur);
        ma = max(ma, cur);
        ans = max(ans, max(abs(cur-ma), abs(cur-mi)));
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    ldb l = -20000, r = 20000;
    ldb m1, m2;
    while(r-l > 1e-13)
    {
        m1 = (l+l+r)/3;
        m2 = (l+r+r)/3;
        if(f(m1) < f(m2))
            r = m2;
        else
            l = m1;
    }
    cout.precision(12);
    cout.setf(ios::fixed);
    cout<<f((l+r)/2)<<endl;
    return 0;
}
