#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL n,k;
    cin>>n>>k;
    cout<<(n/k%2 ? "YES" : "NO")<<endl;
    return 0;
}
