#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200000];
int C[200001];
int F[200001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    int ans = 0;
    for(int i = 0; i < n; ++i)
        ans += ++C[A[i]] > 1;
    int ind = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(C[i])
            continue;
        while(C[A[ind]]==1)
        {
            ++ind;
        }
        while(1)
            if((F[A[ind]] || i < A[ind])&& C[A[ind]] != 1)
            {
                --C[A[ind]];
                A[ind] = i;
                ++ind;
                break;
            }
            else
            {
                F[A[ind]] = 1;
                ++ind;
            }
    }
    cout<<ans<<endl;
    for(int i = 0; i < n; ++i)
        cout<<A[i]<<' ';
    cout<<endl;
    return 0;
}
