#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int h, m, ans = 0;
    char c;
    cin>>h>>c>>m;
    while(h/10 != m%10 || h%10 != m/10)
    {
        ++m;
        m %= 60;
        if(m==0)
            ++h;
        h %= 24;
        ++ans;
    }
    cout<<ans<<endl;
    return 0;
}
