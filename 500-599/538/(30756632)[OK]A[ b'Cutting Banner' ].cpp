#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s = "CODEFORCES";
    string t;
    cin>>t;
    int n = t.size();
    if(n<s.size())
        return cout<<"NO"<<endl, 0;
    for(int i = 0; i < n; ++i)
    {
        if(t.substr(0,i) == s.substr(0,i) && t.substr(i+n-s.size()) == s.substr(i))
            return cout<<"YES"<<endl, 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
