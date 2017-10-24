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
    int ax, ay, bx, by, cx, cy;
    cin>> ax>> ay>> bx>> by>> cx>> cy;
    cout<<(dist(ax, ay, bx, by) == dist(bx, by, cx, cy) ? "Yes" : "No")<<endl;
    return 0;
}
