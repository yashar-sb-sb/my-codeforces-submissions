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
    auto it = s.begin();
    char c;
    while(it!=s.end() && cin>>c)
        if(*it == c)
            ++it;
    cout<<(it == s.end() ? "YES" : "NO")<<endl;
    return 0;
}
