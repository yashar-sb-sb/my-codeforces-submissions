#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[5000], B[5000], C[5000];
int Xa[5000], Xb[5000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cout<<"? "<<0<<' '<<i<<endl;
        cin>>Xa[i];
    }
    for(int i = 1; i < n; ++i)
    {
        cout<<"? "<<i<<' '<<0<<endl;
        cin>>Xb[i];
    }
    int ans= 0;
    for(int i = 0; i < n; ++i)
    {
        A[0] = i;
        for(int j = 0; j < n; ++j)
            B[j] = i^Xa[j];
        for(int j = 1; j < n; ++j)
            A[j] = B[0]^Xb[j];
        bool is = true;
        for(int j = 0; j < n; ++j)
            if(A[B[j]] != j)
            {
                is = false;
                break;
            }
        if(is)
        {
            ++ans;
            if(ans == 1)
                for(int i = 0; i < n; ++i)
                    C[i] = A[i];
        }
    }
    cout<<"!\n"<<ans<<'\n';
    for(int i = 0; i < n; ++i)
        cout<<C[i]<<' ';
    cout<<endl;
    return 0;
}
