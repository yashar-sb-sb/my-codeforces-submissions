#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[101];
int S[101];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    int p, c;
    cin>>p;
    for(int i = 1; i < m; ++i)
    {
        cin>>c;
        int num = (n+c-p)%n;
        if(!num)
            num = n;
        if(A[p] && A[p] != num)
            return cout<<-1<<endl, 0;
        A[p] = num;
        if(S[num] && S[num] != p)
            return cout<<-1<<endl, 0;
        S[num] = p;
        p = c;
    }
    int ind = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(A[i])
            continue;
        while(S[++ind]);
        A[i] = ind;
    }
    for(int i = 1; i <= n; ++i)
        cout<<A[i]<<' ';
    cout<<endl;
    return 0;
}
