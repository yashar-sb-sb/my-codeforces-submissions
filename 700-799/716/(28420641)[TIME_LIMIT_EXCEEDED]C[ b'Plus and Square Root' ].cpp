#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL sq(LL inp)
{
    return sqrt(inp) + 0.5;
}

bool can(LL inp)
{
    LL s = sq(inp);
    if(s * s != inp)
        return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    LL num = 2;
    cin>>n;
    for(LL l = 1; l <= n; ++l)
    {
        LL i;
        for(i = 0; !can(num+i*l) || sq(num+i*l) % (l+1) != 0; ++i);
        num += i * l;
        num = sq(num);
        cout<<i<<endl;
    }
    return 0;
}
