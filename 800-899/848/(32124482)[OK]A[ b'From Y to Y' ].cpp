#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(int i = 2; i < 1000; ++i)
        A[i] = i-1+A[i-1];
    int k;
    cin>>k;
    int cur = 999;
    for(char i = 'a'; i <= 'z'; ++i)
    {
        while(A[cur]>k)
            --cur;
        k -= A[cur];
        for(int j = 0; j < cur; ++j)
            cout<<i;
        if(!k)
            break;
    }
    cout<<endl;
    return 0;
}
