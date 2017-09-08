#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    int x, y;
    for(int i = 0; i < m; ++i)
    {
        cin>>x>>y;
        ++A[x];
        ++A[y];
    }
    sort(A+1, A+n+1);
    if(A[n]==n-1 && A[n-1] == 1)
    {
        cout<<"star topology"<<endl;
        return 0;
    }
    if(A[n] == 2 && A[1] == 2)
    {
        cout<<"ring topology"<<endl;
        return 0;
    }
    if(A[n] == 2 && A[2] == 1 && A[3] == 2)
    {
        cout<<"bus topology"<<endl;
        return 0;
    }
    cout<<"unknown topology"<<endl;
    return 0;
}
