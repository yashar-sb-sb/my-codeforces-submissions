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
    cout<<( x%s == t || (x>t+s && (x-1)%s==t) ? "YES" : "NO")<<endl;
    return 0;
}
