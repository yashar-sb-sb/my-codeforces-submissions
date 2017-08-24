#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[100][100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int w, h;
    cin>>w>>h;
    for(int i = 0; i < h; ++i)
        for(int j = 0; j < w; ++j)
            cin>>A[j][i];
    for(int i = 0; i < w; ++i)
    {
        for(int j = 0; j < h; ++j)
            cout<<A[i][j]<<A[i][j];
        cout<<'\n';
        for(int j = 0; j < h; ++j)
            cout<<A[i][j]<<A[i][j];
        cout<<'\n';
    }
    return 0;
}
