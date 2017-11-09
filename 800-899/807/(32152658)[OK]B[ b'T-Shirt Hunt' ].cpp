#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int p, x, y;

bool check(int s)
{
    int i = s/50%475;
    for(int count = 26; --count;)
    {
        i = (i*96+42) % 475;
        if(i+26 == p)
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>p>>x>>y;
    int s = x;
    while(s>=y)
    {
        if(check(s))
            return cout<<0<<endl, 0;
        s -= 50;
    }
    for(int i = 1;; ++i)
    {
        x += 50;
        if(check(x))
            return cout<<i<<endl, 0;
        x += 50;
        if(check(x))
            return cout<<i<<endl, 0;
    }
    return 0;
}
