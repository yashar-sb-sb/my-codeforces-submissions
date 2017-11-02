#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[1000][1001];
#define S(i,j) A[i][j]=A[j][i]='Y'

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k;
    cin>>k;
    memset(A, 'N', sizeof(A));
    S(2,0);
    for(int i = 2; i < 31; ++i)
        S(i,i+1);
    int start = 32;
    while(k)
    {
        int left = start++;
        int right = start++;
        int cur = 1;
        S(left,0);
        S(right,0);
        int l = 31;
        while(cur*2<=k)
        {
            --l;
            int nl = start++;
            int nr = start++;
            cur *= 2;
            S(left, nr);
            S(nl, right);
            S(left, nl);
            S(right, nr);
            left = nl;
            right = nr;
        }
        k-=cur;
        S(left,l);
    }
    cout<<start<<'\n';
    for(int i = 0; i < start; ++i)
    {
        for(int j = 0; j < start; ++j)
            cout<<A[i][j];
        cout<<'\n';
    }
    return 0;
}
