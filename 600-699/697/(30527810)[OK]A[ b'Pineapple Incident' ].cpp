#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t, s, x;
    cin>>t>>s>>x;
    cout<<( (x>=t && x%s == t%s) || (x>t+s && (x-1+s)%s==t%s) ? "YES" : "NO")<<endl;
    return 0;
}
