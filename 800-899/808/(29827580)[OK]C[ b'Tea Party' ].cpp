#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100];
int B[100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, w;
    cin>>n>>w;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    for(int i = 0; i < n; ++i)
    {
        B[i] = (A[i]+1)/2;
        w -= B[i];
    }
    if(w<0)
        return cout<<-1<<endl, 0;
    int ma = 1000;
    for(int i = 100; i >= 0; --i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(A[j] == i)
            {
                ma = min(A[j], ma);
                int cur = min(ma-B[j], w);
                w -= cur;
                B[j] += cur;
            }
        }
    }
    if(w)
        return cout<<-1<<endl, 0;
    for(int i = 0; i < n; ++i)
        cout<<B[i]<<' ';
    cout<<endl;
    return 0;
}
