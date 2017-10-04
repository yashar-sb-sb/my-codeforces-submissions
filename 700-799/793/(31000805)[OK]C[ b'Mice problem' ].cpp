#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int N, X1, X2, Y1, Y2;
int X[100000];
int Y[100000];
int VX[100000];
int VY[100000];
bool f(ldb time)
{
    for(int i = 0; i < N; ++i)
    {
        ldb x = time * VX[i] + X[i];
        ldb y = time * VY[i] + Y[i];
        if(x <= X1 || x >= X2 || y <= Y1 || y >= Y2)
            return false;
    }
    return true;
}

ldb comp(int v, ldb loc, ldb l, ldb r)
{
    if(loc>l && loc < r)
        return 0;
    if(v == 0)
        return 1e18;
    return min((l-loc)/v, (r-loc)/v);
}

ldb early(int id)
{
    return max(comp(VX[id], X[id], X1, X2), comp(VY[id], Y[id], Y1, Y2));
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>N>>X1>>Y1>>X2>>Y2;
    if(X1>X2)
        swap(X1,X2);
    if(Y1>Y2)
        swap(Y1,Y2);
    ldb mi = 0;
    for(int i = 0; i < N; ++i)
    {
        cin>>X[i]>>Y[i]>>VX[i]>>VY[i];
        mi = max(mi, early(i));
    }
    cout.setf(ios::fixed);
    cout.precision(20);
    if(f(mi+1e-10))
        cout<<mi+1e-10<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
