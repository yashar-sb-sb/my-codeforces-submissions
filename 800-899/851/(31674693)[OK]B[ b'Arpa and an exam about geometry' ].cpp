#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL dist(LL x, LL y, LL X, LL Y)
{
    X -= x;
    Y -= y;
    return X*X + Y*Y;
}

LL dot(LL x, LL y, LL X, LL Y, LL ox=0, LL oy=0)
{
    return (x-ox)*(Y-oy) - (y-oy)*(X-ox);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL ax, ay, bx, by, cx, cy;
    cin>> ax>> ay>> bx>> by>> cx>> cy;
    cout<<(dist(ax, ay, bx, by) == dist(bx, by, cx, cy) && dot(ax, ay, bx, by, cx, cy) != 0 ? "Yes" : "No")<<endl;
    return 0;
}
