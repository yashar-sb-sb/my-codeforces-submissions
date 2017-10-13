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
    if(k > int(s.size()))
        return cout<<"impossible"<<endl, 0;
    set<char> se;
    for(char c:s)
        se.insert(c);
    cout<<max(int(k-se.size()), 0)<<endl;
    return 0;
}
