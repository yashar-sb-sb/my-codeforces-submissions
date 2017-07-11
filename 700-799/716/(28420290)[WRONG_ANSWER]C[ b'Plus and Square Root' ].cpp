#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<LL> ans;

int main()
{
    ios_base::sync_with_stdio(0);
    LL n;
    cin>>n;
    LL num = 1e9/(n+1)*(n+1);
    while(n>1)
    {
        num *= num;
        ans.push_back((num - LL(1e9))/n);
        num -= (num - LL(1e9))/n*n;
        n--;
    }
    ans.push_back(num*num-2LL);
    reverse(ans.begin(), ans.end());
    num = 2;
    for(LL i = 0; i < n; ++i)
    {
        num = num + (i+1LL) * ans[i];
        LL t = sqrt(num) + 0.5;
        assert(t*t == num);
        num = t;
        assert(num % (i+2) == 0);
    }
    for(LL i:ans)
        cout<<i<<'\n';
    return 0;
}
