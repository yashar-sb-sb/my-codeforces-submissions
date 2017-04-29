#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int f(string s, string t)
{
    t = t + t;
    return t.find(s);
}

string A[50];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    int ans = 1e9;
    for(int i = 0; i < n; ++i)
    {
        int cur = 0;
        for(int j = 0 ; j < n; ++j)
        {
            int tmp = f(A[i], A[j]);
            if(tmp == -1)
                return cout<<-1,0;
            cur += tmp;
        }
        ans = min(ans, cur);
    }
    cout<<ans;
    return 0;
}
