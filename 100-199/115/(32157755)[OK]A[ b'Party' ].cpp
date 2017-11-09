#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[2001];

int f(int v, int d=1)
{
    int ans = d;
    for(int i:T[v])
        ans = max(ans, f(i,d+1));
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
        int a;
        cin>>a;
        if(a==-1)
            a=0;
        T[a].push_back(i);
    }
    int ans = 0;
    for(int i:T[0])
        ans = max(ans, f(i));
    cout<<ans<<endl;
    return 0;
}
