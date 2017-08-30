#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int A[2000], B[2000];


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k,n;
    cin>>k>>n;
    for(int i = 0; i < k; ++i)
        cin>>A[i];
    for(int i = 1; i < k; ++i)
        A[i] += A[i-1];
    sort(A, A+k);
    for(int i = 0; i < n; ++i)
        cin>>B[i];
    sort(B, B+k);
    int ans = 0;
    for(int i = 0; i <= k-n; ++i)
    {
        int diff = A[i] - B[0];
        bool f = true;
        int l = i;
        for(int j = 0; j < n; ++j)
        {
            while(l<k && A[l] - B[j] != diff)
                ++l;
            if(l == k)
            {
                f = false;
                break;
            }
        }
        ans += f && diff<=0;
    }
    cout<<ans<<endl;
    return 0;
}
