#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    set<int> se;
    int n;
    cin>>n;
    while(cin>>n && se.size() < 4)
        se.insert(n);
    if(se.size() > 3)
        return cout<<"NO"<<endl, 0;
    if(se.size() == 1)
        return cout<<"YES"<<endl, 0;
    cout<<( *next(se.begin())-*se.begin() == *se.rbegin()-*next(se.rbegin()) ? "YES" : "NO")<<endl;
    return 0;
}
