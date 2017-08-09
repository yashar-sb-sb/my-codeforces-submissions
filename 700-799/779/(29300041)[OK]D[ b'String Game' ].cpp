#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool issub(string &s, string &t)
{
    auto it = s.begin();
    for(char c : t)
    {
        while(it != s.end() && *it != c)
            ++it;
        if(it == s.end())
            return false;
        ++it;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string t, p;
    cin>>t>>p;
    int n = t.size();
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin>>v[i];

    int l = 0, r = n;
    int m;
    while(l + 1 < r)
    {
        m = (l+r)/2;
        string tmp = t;
        for(int i = 0; i < m; ++i)
            tmp[v[i]-1] = ' ';
        string cur = "";
        for(char c: tmp)
            if(c != ' ')
                cur.push_back(c);
        if(issub(cur, p))
            l = m;
        else
            r = m;
    }
    cout<<l<<endl;
    return 0;
}
