#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int p = 0, a;
    int i;
    for(i = 0; i < n;)
    {
        cin>>a;
        ++i;
        if(a<=p)
            break;
        p = a;
    }
    if(a==p)
    {
        for(; i < n;)
        {
            cin>>a;
            ++i;
            if(a>p)
                return cout<<"NO"<<endl, 0;
            if(a<p)
                break;
            p = a;
        }
    }
    if(a<p)
    {
        p = a;
        for(; i < n;)
        {
            cin>>a;
            ++i;
            if(a>=p)
            {
                return cout<<"NO"<<endl, 0;
            }
            p = a;
        }
    }
    cout<<(i==n ? "YES" : "NO")<<endl;
    return 0;
}
