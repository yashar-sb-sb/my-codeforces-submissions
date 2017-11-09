#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int L[150];
int R[150];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m;
    char ch;
    memset(L, -1, sizeof(L));
    cin>>n>>m;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
        {
            cin>>ch;
            if(ch == 'W')
            {
                R[i] = j;
                if(L[i]<0)
                    L[i] = j;
            }
        }
    int ans = 0, i = n-1, j;
    while(i>=0&&L[i]<0)
        --i;
    if(i<0)
        return cout<<0<<endl, 0;
    if(i&1)
        j = L[i];
    else
        j = R[i];
    ans = i;
    while(i>0)
    {
        if(i&1)
        {
            ans += max(R[i], max(j,R[i-1]))-j;
            j = max(R[i], max(j,R[i-1]));
        }
        else
        {
            int h = j;
            if(L[i]!=-1)
                h = min(L[i], h);
            if(L[i-1]!=-1)
                h = min(L[i-1], h);
            ans += j-h;
            j = h;
        }
        --i;
    }
    ans += j;
    cout<<ans<<endl;
    return 0;
}
