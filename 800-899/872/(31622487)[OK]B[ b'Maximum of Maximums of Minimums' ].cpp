#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, inp;
    cin>>n>>k;
    if(k == 1)
    {
        int mi = 1e9;
        for(int i = 0; i < n; ++i)
        {
            cin>>inp;
            mi = min(mi, inp);
        }
        cout<<mi<<endl;
    }
    else if(k > 2)
    {
        int ma = -1e9;
        for(int i = 0; i < n; ++i)
        {
            cin>>inp;
            ma = max(ma, inp);
        }
        cout<<ma<<endl;
    }
    else
    {
        int a;
        cin>>a;
        int b;
        while(cin>>b);
        cout<<max(a, b)<<endl;
    }
    return 0;
}
