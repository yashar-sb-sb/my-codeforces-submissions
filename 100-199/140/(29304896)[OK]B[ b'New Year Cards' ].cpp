#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[301][301];
int Ind[301];
int Mi[301];
int My[301];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, inp;
    cin>>n;
    memset(Mi, 127, sizeof(Mi));
    for(int i = 1; i <= n; ++i)
    {
        A[i][0] = 1000;
        for(int j = 1; j <= n; ++j)
        {
            cin>>inp;
            A[i][inp] = j;
        }
    }
    My[0] = 1000;
    for(int i = 1; i <= n; ++i)
    {
        cin>>inp;
        My[inp] = i;
    }

    int first = 0, second = 0;

    for(int i = 1; i <= n; ++i)
    {
        if(My[i] < My[second])
            second = i;
        if(My[second] < My[first])
            swap(first, second);
        for(int j = 1; j <= n; ++j)
        {
            int cur = j==first ? second : first;
            if(A[j][cur] < Mi[j])
            {
                Mi[j] = A[j][cur];
                Ind[j] = i;
            }
        }
    }
    for(int i = 1; i <= n; ++i)
        cout<<Ind[i] << ' ';
    cout<<endl;
    return 0;
}
