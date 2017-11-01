#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int seg(int a, int b, int h)
{
    return (a+b)*h/2;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    int r[2], l[2];
    cin>>r[0]>>r[1];
    int b;
    cin>>b;
    cin>>l[1]>>l[0];
    int ans = seg(2*t+1, 2*t+2*min(l[0], r[0])-1, min(l[0], r[0]));
    ans += seg(2*(t+min(l[0], r[0])), 2*(t+min(l[0], r[0])), max(l[0],r[0]) - min(l[0],r[0]));
    ans += seg(2*b+1, 2*b+2*min(l[1], r[1])-1, min(l[1], r[1]));
    cout<<ans<<endl;
    return 0;
}
