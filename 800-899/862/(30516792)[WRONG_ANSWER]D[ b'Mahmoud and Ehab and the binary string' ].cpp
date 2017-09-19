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
    cout<<"? ";
    for(int i = 0; i < n; ++i)
        cout<<'0';
    cout<<endl;
    int a, b;
    cin>>a;
    cout<<"? ";
    cout<<'1';
    for(int i = 1; i < n; ++i)
        cout<<'0';
    cout<<endl;
    cin>>b;
    int zero, one;
    if(a < b)
    {
        zero = 1;
        int l = 1, r = n;
        while(l + 1 < r)
        {
            int m = (l + r) / 2;
            int ind = 0;
            cout<<"? ";
            for(; ind < m; ++ind)
                cout<<'1';
            for(; ind < n; ++ind)
                cout<<'0';
            cout<<endl;
            cin>>b;
            int l1 = (m-b+a)/2;
            if(l1 > 1)
                r = m;
            else
                l = m;
        }
        one = l;
    }
    else
    {
        one = 1;
        int l = 1, r = n;
        while(l + 1 < r)
        {
            int m = (l + r) / 2;
            int ind = 0;
            cout<<"? ";
            for(; ind < m; ++ind)
                cout<<'1';
            for(; ind < n; ++ind)
                cout<<'0';
            cout<<endl;
            cin>>b;
            int l0 = (m+b-a)/2;
            if(l0 > 1)
                r = m;
            else
                l = m;
        }
        zero = l;
    }
    cout<<"! "<<zero<<' '<<one<<endl;
    return 0;
}
