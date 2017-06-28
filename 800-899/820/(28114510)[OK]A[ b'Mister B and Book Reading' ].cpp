#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int c, v0, v1, a, l;
    cin>>c>>v0>>v1>>a>>l;
    int day = 1;
    c -= v0;
    while(c>0)
    {
        ++day;
        c += l;
        int cur = (v0+=a);
        if(cur>v1)
            cur = v1;
        c -= cur;
    }
    cout<<day<<endl;
    return 0;
}
