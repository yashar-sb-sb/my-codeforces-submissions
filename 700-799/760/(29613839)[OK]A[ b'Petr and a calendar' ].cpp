#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int M[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int m, d;
    cin>>m>>d;
    m = M[m];
    m -= 8-d;
    int ans = 1 + m/7 + (m%7 > 0);
    cout<<ans<<endl;
    return 0;
}
