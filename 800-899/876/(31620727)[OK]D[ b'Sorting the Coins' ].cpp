#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[300001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int pointer = n;
    cout<<1;
    for(int i = 0; i < n; ++i)
    {
        int inp;
        cin>>inp;
        A[inp] = 1;
        while(A[pointer])
            --pointer;
        cout<<' '<<2+i-n+pointer;
    }
    cout<<endl;
    return 0;
}
