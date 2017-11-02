#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    sort(A, A+n);
    int ans = 0, count = 0;
    for(int i = 0; i < n; ++i)
    {
        if(A[i] < 0)
            continue;
        ++ans;
        count = 1;
        for(int j = i+1; j < n; ++j)
        {
            if(A[j]<0)
                continue;
            if(A[j]>=count)
            {
                ++count;
                A[j] = -1;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
