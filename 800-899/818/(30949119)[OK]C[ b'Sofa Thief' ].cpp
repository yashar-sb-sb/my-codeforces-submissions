#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int T[100001];
int R[100001];
int B[100001];
int L[100001];


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int d;
    cin>>d;
    vector<vector<int>> sofas(d+1);
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= d; ++i)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1 > x2)
            swap(x1, x2);
        if(y1 > y2)
            swap(y1, y2);
        ++R[max(x1, x2)];
        ++L[min(x1, x2)];
        ++T[min(y1, y2)];
        ++B[max(y1, y2)];
        sofas[i] = {x1,y1,x2,y2};
    }
    int cl, cr, ct, cb;
    cin>>cl>>cr>>ct>>cb;
    for(int i = 1; i <= 1e5; ++i)
    {
        L[i] += L[i-1];
        T[i] += T[i-1];
    }
    for(int i = 1e5-1; i >= 0; --i)
    {
        R[i] += R[i+1];
        B[i] += B[i+1];
    }
    for(int i = 1; i <= d; ++i)
    {
        int x1,y1,x2,y2;
        x1 = sofas[i][0];
        y1 = sofas[i][1];
        x2 = sofas[i][2];
        y2 = sofas[i][3];
        if(y1 != y2)
        {
            if(B[y2] -1 != cb)
                continue;
            if(T[y1] -1 != ct)
                continue;
            if(L[x1-1] != cl)
                continue;
            if(R[x1+1] != cr)
                continue;
        }
        else
        {
            if(R[x2] -1 != cr)
                continue;
            if(L[x1] -1 != cl)
                continue;
            if(T[y1-1] != ct)
                continue;
            if(B[y1+1] != cb)
                continue;
        }
        cout<<i<<endl;
        return 0;
    }
    cout<<-1<<endl;
    return 0;
}
