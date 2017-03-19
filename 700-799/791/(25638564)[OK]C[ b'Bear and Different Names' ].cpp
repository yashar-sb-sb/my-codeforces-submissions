#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int na = 0;
string f()
{
    string res = "A";
    if(na<26)
        res+='a'+na;
    else
    {
        res+='a';
        res+='a'+na-26;
    }
    ++na;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n, k;
    vector<string> res;
    string s;
    cin>>n>>k;
    for(int i = 1; i < k; ++i)
        res.push_back(f());
    for(int i = k-1; i < n; ++i)
    {
        cin>>s;
        if(s == "YES")
            res.push_back(f());
        else
            res.push_back(res[i-k+1]);
    }
    for(auto i:res)
        cout<<i<<' ';
    cout<<endl;
}
