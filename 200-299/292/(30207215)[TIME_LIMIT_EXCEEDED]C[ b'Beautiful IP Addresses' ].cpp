#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n;
set<int> ddd;
stringstream ss;

inline bool check(vector<int> v)
{
    ddd.clear();
    for(int i:v)
    {
        do
        {
            ddd.insert(i%10);
            i /= 10;
        }
        while(i);
    }
    if(int(ddd.size()) != n)
        return false;
    ss.str("");
    for(int i:v)
        ss<<i;
    string s = ss.str();
    reverse(s.begin(), s.end());
    return s == ss.str();
}

set<int> numbers;
vector<int> digits;

void f(int num = 0)
{
    if(numbers.count(num) || num > 255)
        return;
    numbers.insert(num);
    for(int i:digits)
        f(num * 10 + i);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    int inp;
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        digits.push_back(inp);
    }
    f();
    numbers.erase(0);
    for(int i:digits)
        numbers.insert(i);
    vector<vector<int>> ans;
    for(int i:numbers)
    {
        stringstream tt;
        tt<<i;
        string t = tt.str();
        reverse(t.begin(), t.end());
        for(int j:numbers)
        {
            ss.str("");
            ss<<j;
            string s;
            s = ss.str();
            bool flag = false;
            for(int d = 0; d < int(min(t.size(), s.size())); ++d)
                if(s[d] != t[d])
                    flag = true;
            if(flag)
                continue;
            for(int k:numbers)
            {
                ss.str("");
                ss<<j<<k;
                string s;
                s = ss.str();
                flag = false;
                for(int d = 0; d < int(min(t.size(), s.size())); ++d)
                    if(s[d] != t[d])
                        flag = true;
                if(flag)
                    continue;

                for(int l:numbers)
                    if(check({j,k,l,i}))
                        ans.push_back({j,k,l,i});
            }
        }
    }
    cout<<ans.size()<<'\n';
    for(auto i:ans)
        cout<<i[0]<<'.'<<i[1]<<'.'<<i[2]<<'.'<<i[3]<<'\n';
    return 0;
}
