#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int T[1000];
string s[1000];
string t[1000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, d;
    cin>>n>>d;
    for(int i = 0; i < n; ++i)
        cin>>s[i]>>t[i]>>T[i];
    set<vector<string>> ans;
    for(int i = 0; i < n; ++i)
    {
        for(int j = i+1; j < n; ++j)
        {
            if(s[i] == t[j] && t[i] == s[j] && abs(T[i]-T[j])<=d && T[i] != T[j] && s[i] != s[j])
            {
                ans.insert({min(s[i],s[j]), max(s[i],s[j])});
            }
        }
    }
    cout<<ans.size()<<'\n';
    for(auto i:ans)
        cout<<i[0]<<' '<<i[1]<<'\n';
    return 0;
}
