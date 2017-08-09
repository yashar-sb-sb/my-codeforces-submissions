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
    int k;
    cin>>s>>k;
    reverse(s.begin(), s.end());
    int zeros = 0, ans = 0;
    for(char i:s)
    {
        if(i == '0')
            ++zeros;
        else
            ++ans;
        if(zeros == k)
            return cout<<ans,0;
    }
    cout<<int(s.size())-1;
    return 0;
}
