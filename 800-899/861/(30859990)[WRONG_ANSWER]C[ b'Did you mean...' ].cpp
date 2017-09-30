#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

#define con(x) (string("aeiou").find(x) == string::npos)

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n=0;
    char c, p;
    cin>>p;
    cout<<p;
    n = con(p);
    bool d = false;
    while(cin>>c)
    {
        if(!con(c))
        {
            d = false;
            n = 0;
            cout<<c;
            continue;
        }
        if(c!=p)
            d = true;
        ++n;
        if(n>=3 && d)
        {
            cout<<' ';
            n = 1;
            d = false;
        }
        cout<<c;
        p = c;
    }
    cout<<endl;
    return 0;
}
