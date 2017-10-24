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

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL ax, ay, bx, by, cx, cy;
    cin>> ax>> ay>> bx>> by>> cx>> cy;
    LL X1 = bx-ax, Y1 = by-ay, X2 = cx-bx, Y2 = cy-bx;
    cout<<(dist(ax, ay, bx, by) == dist(bx, by, cx, cy) && X1*Y2 != X2*Y1 ? "Yes" : "No")<<endl;
    return 0;
}
