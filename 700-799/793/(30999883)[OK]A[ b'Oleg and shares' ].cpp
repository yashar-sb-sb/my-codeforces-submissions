#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL n, k;
    cin>>n>>k;
    LL sum = 0;
    LL inp;
    cin>>inp;
    sum = inp;
    LL mi = inp;
    LL r = inp % k;
    for(int i = 1; i < n; ++i)
    {
        cin>>inp;
        if(inp % k != r)
            return cout<<-1<<endl, 0;
        mi = min(mi, inp);
        sum += inp;
    }
    cout<<(sum - n*mi)/k<<endl;
    return 0;
}
