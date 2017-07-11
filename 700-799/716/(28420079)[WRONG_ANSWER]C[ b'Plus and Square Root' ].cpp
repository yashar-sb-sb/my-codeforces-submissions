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
    LL num = 1e8;
    while(n>1)
    {
        num *= num;
        ans.push_back((num - LL(1e9))/n);
        num -= (num - LL(1e9))/n*n;
        n--;
    }
    ans.push_back(num*num-2LL);
    for(int i = ans.size()-1; i >= 0; --i)
        cout<<ans[i]<<'\n';
    return 0;
}
