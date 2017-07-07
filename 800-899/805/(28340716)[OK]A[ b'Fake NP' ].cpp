#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int l, r;
    cin>>l>>r;
    --l;
    int ind = 0, ans = 0;
    for(int i = 2; i < 100; ++i)
    {
        if(r/i-l/i > ans)
        {
            ans = r/i-l/i;
            ind = i;
        }
    }
    int i = l+1;
    if(r/i-l/i > ans)
    {
        ans = r/i-l/i;
        ind = i;
    }
    i = r;
    if(r/i-l/i > ans)
    {
        ans = r/i-l/i;
        ind = i;
    }

    cout<<ind<<endl;
    return 0;
}
