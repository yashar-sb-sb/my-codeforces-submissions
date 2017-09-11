#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

stringstream ss;
map<string, set<string>> forwrd, backward;
map<string, bool> used;

bool check(string from, string to)
{
    if(from > to)
        swap(from, to);
    return used[from+to];
}

void flip(string from, string to)
{
    if(from > to)
        swap(from, to);
    used[from+to] ^= 1;
}

void add(string s, string t)
{
    forwrd[s].insert(t);
    backward[t].insert(s);
}

void add(int si, string t)
{
    ss.str("");
    ss<<si;
    string s = ss.str();
    forwrd[s].insert(t);
    backward[t].insert(s);
}

void add(string s, int ti)
{
    ss.str("");
    ss<<ti;
    string t = ss.str();
    forwrd[s].insert(t);
    backward[t].insert(s);
}

unordered_set<string> se;

bool _f(string cur)
{
    if(se.count(cur))
        return false;
    if(cur == "end")
        return true;
    se.insert(cur);
    bool suc = false;
    for(auto i:forwrd[cur])
    {
        if(!check(cur,i))
        {
            flip(cur, i);
            suc = _f(i);
            if(suc)
                break;
            flip(cur, i);
        }
    }
    if(suc)
        return true;
    for(auto i:backward[cur])
    {
        if(check(cur,i))
        {
            flip(cur, i);
            suc = _f(i);
            if(suc)
                break;
            flip(cur, i);
        }
    }
    return suc;
}

bool f()
{
    se.clear();
    return _f("start");
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    string name, city;
    map<string, vector<pair<string, int>>> ma;
    for(int i = 1; i <= n; ++i)
    {
        cin>>name>>city;
        ma[name.substr(0,3)].push_back(make_pair(name.substr(0,2)+city[0], i));
        add(name.substr(0,3), "end");
        add(name.substr(0,2)+city[0], "end");
        add("start", i);
    }
    for(auto item:ma)
    {
        if(item.second.size() == 1)
            add(item.second[0].second, item.first);
        for(auto i:item.second)
            add(i.second, i.first);
    }
    /*
    for(auto i:forwrd)
    {
        for(string j:i.second)
            cerr<<i.first<<' '<<j<<endl;
    }
    */
    for(int i = 1; i <= n; ++i)
        if(!f())
            return cout<<"NO"<<endl, 0;
    cout<<"YES"<<'\n';
    for(int i = 1; i <= n; ++i)
    {
        ss.str("");
        ss<<i;
        string str = ss.str();
        for(auto j:forwrd[str])
            if(check(str, j))
            {
                cout<<j<<'\n';
                break;
            }
    }
    return 0;
}
