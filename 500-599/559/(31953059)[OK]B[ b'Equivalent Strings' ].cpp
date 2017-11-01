#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

void go(string &s, int l, int r)
{
    if((r-l)&1)
        return;
    int mid = (l+r)>>1;
    go(s, l, mid);
    go(s, mid, r);
    for(int i = l; i < mid; ++i)
        if(s[i]<s[mid+i-l])
            return;
        else if(s[i]>s[mid+i-l])
            break;
    for(int i = l; i < mid; ++i)
        swap(s[i], s[mid+i-l]);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s, t;
    cin>>s>>t;
    go(s, 0, s.size());
    go(t, 0, s.size());
    cout<<(s==t? "YES" : "NO")<<endl;
    return 0;
}
