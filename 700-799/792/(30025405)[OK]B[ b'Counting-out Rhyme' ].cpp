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
    int n, k;
    cin>>n>>k;
    for(int i = 0; i < n; ++i)
        cin>>B[i];
    for(int i = 0; i < n; ++i)
        A[i] = 1;
    int leader = 0;
    for(int i = 0; i < k; ++i)
    {
        int steps = B[i] % (n-i);
        int cur = leader;
        while(steps)
        {
            ++cur;
            if(cur == n)
                cur = 0;
            if(A[cur])
                --steps;
        }
        A[cur] = 0;
        leader = cur;
        while(!A[leader])
        {
            ++leader;
            if(leader == n)
                leader = 0;
        }
        ++cur;
        cout<<cur<<' ';
    }
    cout<<endl;
    return 0;
}
