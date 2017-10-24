#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int point[1001][5];
int bad[1001];

int dist2(int a, int b)
{
    int dist = 0;
    for(int i = 0; i < 5; ++i)
        dist += (point[a][i]-point[b][i])*(point[a][i]-point[b][i]);
    return dist;
}

int dot(int a, int b, int c)
{
    int sum = 0;
    for(int i = 0; i < 5; ++i)
        sum += (point[a][i]-point[c][i])*(point[b][i]-point[c][i]);
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
        for(int j = 0; j < 5; ++j)
            cin>>point[i][j];
    int mi = 1e9, a, b;
    for(int i = 1; i < n; ++i)
        for(int j = i + 1; j <= n; ++j)
        {
            int d = dist2(i,j);
            if(d < mi)
            {
                mi = d;
                a = i;
                b = j;
            }
        }
    for(int i = 1; i <= n; ++i)
        if(i != a && i != b)
            if(dot(a, b, i) > 0)
                bad[i] = 1;
    for(int i = 1; i < n; ++i)
        for(int j = i + 1; j <= n; ++j)
        {
            if(i != a && j != a)
            {
                if(dot(i, j, a) > 0)
                    bad[a] = 1;
            }
            if(i != b && j != b)
            {
                if(dot(i, j, b) > 0)
                    bad[b] = 1;
            }
        }
    int count = 0;
    for(int i = 1; i <= n; ++i)
        count += !bad[i];
    cout<<count;
    for(int i = 1; i <= n; ++i)
        if(!bad[i])
            cout<<'\n'<<i;
    cout<<endl;
    return 0;
}
