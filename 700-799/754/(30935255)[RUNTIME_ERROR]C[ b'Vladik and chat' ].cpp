#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<string> pro_mes(string s)
{
    const regex r("[a-zA-Z][a-zA-Z0-9]*");  
    /*
    smatch sm;

    vector<string> ans;
    if (regex_search(s, sm, r))
    {
        for (int i=1; i<int(sm.size()); i++)
        {
            ans.push_back(sm[i]);
        }
    }
    */
    

    vector<string> ans;

    std::sregex_iterator iter(s.begin(), s.end(), r);
    std::sregex_iterator end;

    while(iter != end)
    {

        for(unsigned i = 0; i < iter->size(); ++i)
        {
            ans.push_back((*iter)[i]);
        }
        ++iter;
    }
    return ans;
}

void solve()
{
    int n;
    cin>>n;
    set<string> users;
    for(int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        users.insert(s);
    }
    int m;
    cin>>m;
    vector<set<string>> ves(n+2);
    vector<string> S(n+2);
        cin.ignore();
    for(int i = 1; i <= m; ++i)
    {
        string s;
        getline(cin, s);
        S[i] = s;
        auto list = pro_mes(s);
        if(s[0] != '?')
        {
            if(users.find(list[0]) != users.end())
                ves[i].insert(list[0]);
        }
        else
        {
            ves[i] = set<string>(users);
            for(auto j:list)
            {
                ves[i].erase(j);
            }
        }
    }
    for(int i = 0; i <= m; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            if(ves[i-1].size() == 1)
            {
                ves[i].erase(*ves[i-1].begin());
            }
            if(ves[i+1].size() == 1)
            {
                ves[i].erase(*ves[i+1].begin());
            }
        }
    }
    for(int i = 1; i <= m; ++i)
    {
        if(ves[i-1].size() == 1)
        {
            ves[i].erase(*ves[i-1].begin());
        }
        if(ves[i+1].size() == 1)
        {
            ves[i].erase(*ves[i+1].begin());
        }
        while(ves[i].size() > 1)
            ves[i].erase(ves[i].begin());
        if(ves[i-1].size() == 1)
        {
            ves[i].erase(*ves[i-1].begin());
        }
        if(ves[i+1].size() == 1)
        {
            ves[i].erase(*ves[i+1].begin());
        }
    }
    for(int i = 1; i <= m; ++i)
        if(!ves[i].size())
        {
            cout<<"Impossible"<<endl;
            return;
        }
    for(int i = 1; i <= m; ++i)
    {
        cout<<*ves[i].begin();
        auto it = S[i].begin();
        while(*it!=':')
            ++it;
        for(; it != S[i].end(); ++it)
            cout<<*it;
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    for(int i = 0; i < t; ++i)
        solve();
    return 0;
}
