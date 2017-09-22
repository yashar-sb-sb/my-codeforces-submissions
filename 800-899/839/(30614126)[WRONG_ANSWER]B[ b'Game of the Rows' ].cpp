#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n, k;
int A[5];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    A[2] = 2*n;
    A[4] = n;
    int inp;
    for(int i = 0; i < k; ++i)
    {
        cin>>inp;
        int s;
        for(int j = 4; j > 0; --j)
        {
            s = min(A[j], inp/j);
            inp -= s*j;
            A[j] -= s;
        }
        for(int j = 1; j < 5 && inp; ++j)
        {
            if(A[j])
            {
                ++A[j-inp-1];
                --A[j];
                inp = 0;
            }
        }
        if(inp)
            return cout<<"NO"<<endl, 0;
    }
    cout<<"YES"<<endl;
    return 0;
}
