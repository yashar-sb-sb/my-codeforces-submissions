#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

unordered_map<int, int> I, J;
unordered_map<LL, int> A;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    LL ans = 0;
    while(n--)
    {
        int i, j;
        cin>>i>>j;
        ans += I[i]++;
        ans += J[j]++;
        ans -= A[(LL(i)<<32) | j]++;
    }
    /*for(pii i:I)
        ans += (LL)i.second*(i.second-1)/2;
    for(pii i:J)
        ans += (LL)i.second*(i.second-1)/2;
    for(auto i:A)
        ans -= (LL)i.second*(i.second-1)/2;
    */
    cout<<ans<<endl;
    return 0;
}
