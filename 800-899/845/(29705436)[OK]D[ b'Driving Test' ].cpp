#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int E[200009];
int S[200009];
int L[200009];
int O[200009];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, e;
    cin>>n;
    S[0] = 0;
    L[0] = 301;
    O[0] = 1;
    for(int i = 1; i <= n; ++i)
    {
        S[i] = S[i-1];
        L[i] = L[i-1];
        O[i] = O[i-1];
        cin>>e;
        E[i] = e;
        if(e == 1)
            cin>>S[i];
        else if(e == 3)
            cin>>L[i];
        else if(e == 4)
            O[i] = 1;
        else if(e == 5)
            L[i] = 301;
        else if(e == 6)
            O[i] = 0;
    }
    int ans = 0;
    int sp = 0, ov = 0;
    for(int i = n; i >= 0; --i)
    {
        sp = max(sp,S[i]);
        ov = max(ov, int(E[i] == 2));
        if(E[i] == 3 || E[i] == 5)
        {
            if(L[i]>=sp)
                sp = S[i];
            else
                ++ans;
        }
        else if(E[i] == 4)
            ov = 0;
        else if(E[i] == 6 && ov)
            ++ans;
    }
    cout<<ans<<endl;
    return 0;
}
