#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    int x, y;
    cin>>x>>y;
    x1 = abs(x1-x2);
    y1 = abs(y1-y2);
    if(x1%x)
        return cout<<"NO"<<endl, 0;
    if(y1%y)
        return cout<<"NO"<<endl, 0;
    x1 /= x;
    y1 /= y;
    cout<<( (x1+y1) & 1 ? "NO" : "YES" )<<endl;
    return 0;
}
