#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;
typedef pair<char,int> pci;

int ans['z'+2];
int T['z'+2];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int m;
    string s;
    cin>>m>>s;
    int n = s.size();
    set<pci> se;
    int d = -1;
    for(int r = 0, l = 0; r < n; ++r)
    {
        ++T[int(s[r])];
        while(l <= d)
        {
            se.erase(pci(s[l], -l));
            ++l;
        }
        se.insert(pci(s[r], -r));
        if(r-l+1<m)
            continue;
        auto x = se.begin();
        ++ans[int(x->first)];
        d = -x->second;
    }
    for(int i = 'a'; i <= 'z'; ++i)
    {
        if(ans[i+1])
            ans[i] = T[i];
        for(int j = 0; j < ans[i]; ++j)
            cout<<char(i);
    }
    cout<<endl;
    return 0;
}
