#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string f(int c, int m, string s)
{
    for(int i = s.size()-1; i >= 0 && c; --i)
        if((s[i]-'0')%3 == m)
            --c, s[i] = '+';
    string ans = "";
    if(c)
        return ans;
    int ind = 0;
    while(ind < int(s.size()) && (s[ind] == '+' || s[ind] == '0'))
        ++ind;
    while(ind < int(s.size()))
    {
        if(s[ind]!='+')
            ans.push_back(s[ind]);
        ++ind;
    }
    if(!ans.size() && s.back() == '0')
        return "0";
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    cin>>s;
    int m = 0;
    for(char c:s)
        m += c-'0';
    m %= 3;
    if(m)
    {
        string t = f(1, m, s);
        string d = f(2, m*2%3, s);
        if(t.size() > d.size())
            s = t;
        else
            s = d;
    }
    else
    {
        string t = f(3, 1, s);
        string d = f(3, 2, s);
        s = f(0, 1, s);
        if(d.size() > s.size())
            s = d;
        if(t.size() > s.size())
            s = t;
    }
    if(s.size())
        cout<<s<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
