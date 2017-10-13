#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[10000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    memset(A, 127, sizeof(A));
    A[0] = A[1] = 0;
    A[2] = 1;
    for(int i = 3; A[i-1] < n; ++i)
    {
        for(int j = 1; j < i; ++j)
            A[i] = min(A[i], A[j] + A[i-j] + j*(i-j));
    }
    int cur = 10000-1;
    for(char cha = 'a'; cha <= 'z' && n; ++cha)
    {
        while(A[cur] > n)
            --cur;
        n -= A[cur];
        for(int i = 0; i < cur; ++i)
            cout<<cha;
    }
    cout<<endl;
    return 0;
}
