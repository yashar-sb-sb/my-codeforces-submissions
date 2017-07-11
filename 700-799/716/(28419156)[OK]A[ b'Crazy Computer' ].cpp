#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);
    int n, c;
    cin>>n>>c;
    int ans = 1;
    int prev, num;
    cin>>prev;
    while(cin>>num)
    {
        if(num-prev > c)
            ans = 1;
        else
            ++ans;
        prev = num;
    }
    cout<<ans<<endl;
    return 0;
}
