#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s,t;
    cin>>s>>t;
    int l = 0;
    auto it = s.begin();
    int n = t.size();
    while(l<n && it!=s.end())
    {
        if(*it == t[l])
            ++it;
        ++l;
    }
    int r = n-1;
    auto itt = s.rbegin();
    while(r>=0 && itt!=s.rend())
    {
        if(*itt == t[r])
            ++itt;
        --r;
    }
    --l;
    ++r;
    int ans = r-l;
    ans = max(ans, 0);
    cout<<ans<<endl;
    return 0;
}
