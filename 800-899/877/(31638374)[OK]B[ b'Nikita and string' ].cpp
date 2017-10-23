#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string s;
int A[5001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>s;
    int n = s.size();
    for(int i = 1; i <= n; ++i)
        A[i] = A[i-1] + (s[i-1] == 'a');
    int ans = 0;
    for(int i = 0; i <= n; ++i)
        for(int j = i; j <= n; ++j)
            ans = max(ans, A[i] + j - i - A[j] + A[i] + A[n] - A[j]);
    cout<<ans<<endl;
    return 0;
}
