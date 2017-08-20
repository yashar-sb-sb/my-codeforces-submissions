#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200001];
bool s[200001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>> A[i];
    int inp;
    int p = 0;
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        p += inp;
    }
    p = - (p%2) - 1;
    for(int i = 1; i <= n; ++i)
    {
        inp = i;
        if(!s[inp])
        {
            p += 2;
        }
        while(!s[inp])
        {
            s[inp] = true;
            inp = A[inp];
        }
    }
    cout<<p<<endl;
    return 0;
}
