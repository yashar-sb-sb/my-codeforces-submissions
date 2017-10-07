#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    getline(cin, s);
    getline(cin, s);
    int ans = 0, cur = 0;
    for(char c:s)
    {
        if(c == ' ')
        {
            ans = max(ans, cur);
            cur = 0;
        }
        else if(c < 'a')
            ++cur;
    }
    cout<<max(ans, cur)<<endl;
    return 0;
}
