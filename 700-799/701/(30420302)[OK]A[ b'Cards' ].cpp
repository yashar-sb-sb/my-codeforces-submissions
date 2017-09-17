#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[101];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    int sum = 0;
    for(int i = 1; i <= n; ++i)
        sum += A[i];
    sum = 2*sum / n;
    n /= 2;
    while(n--)
    {
        int cur = 1;
        while(!A[cur])
            ++cur;
        int nex = cur + 1;
        while(A[cur]+A[nex] != sum)
            ++nex;
        A[cur] = A[nex] = 0;
        cout<<cur<<' '<<nex<<endl;
    }
    return 0;
}
