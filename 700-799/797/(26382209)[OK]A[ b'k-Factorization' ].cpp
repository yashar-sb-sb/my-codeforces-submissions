#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    vector<int> ans;
    for(int i = 2; i <= n; ++i)
    {
        while(n % i == 0)
        {
            if(k == 1)
            {
                k = 0;
                ans.push_back(n);
                goto next;
            }
            --k;
            n /= i;
            ans.push_back(i);
        }
    }
next:
    if(k)
        return cout<<-1, 0;
    for(auto i:ans)
        cout<<i<<' ';
    return 0;
}
