#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool ask(int x, int y)
{
    cout<<"1 "<<x<<' '<<y<<endl;
    string s;
    cin>>s;
    return s == "TAK";
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    int x, y;
    int l = 1, r = n;
    while(l < r)
    {
        x = (l+r) / 2;
        y = x + 1;
        if(ask(x, y))
            r = x;
        else
            l = y;
    }
    int first = l;
    l = 1, r = first - 1;
    while(l < r)
    {
        x = (l+r) / 2;
        y = x + 1;
        if(ask(x, y))
            r = x;
        else
            l = y;
    }
    if(first>1)
        if(ask(l, first))
            return cout<<"2 "<<l<<' '<<first<<endl, 0;
    l = first+1, r = n;
    while(l < r)
    {
        y = (l+r) / 2;
        x = y + 1;
        if(ask(x, y))
            l = x;
        else
            r = y;
    }
    cout<<"2 "<<l<<' '<<first<<endl;
    return 0;
}
