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
    cin>>s;
    int n = s.size();
    int c = 0;
    for(int i = 0; i < n/2; ++i)
        c += s[i] != s[n-i-1];
    if(c>1)
        return cout<<"NO",0;
    if(c==1)
        cout<<"YES";
    else if(n%2==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
