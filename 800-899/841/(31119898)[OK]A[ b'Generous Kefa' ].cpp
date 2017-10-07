#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    map<char, int> se;
    int n;
    cin>>n;
    cin>>n;
    char c;
    while(cin>>c)
        ++se[c];
    for(auto i:se)
        if(i.second > n)
            return cout<<"NO"<<endl, 0;
    cout<<"YES"<<endl;
    return 0;
}
