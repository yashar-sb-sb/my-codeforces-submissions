#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    int sum = 0, inp;
    cin>>n;
    vector<int> odd;
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        if(abs(inp) % 2 == 0)
            if(inp > 0)
                sum += inp;
        if(abs(inp) % 2 == 1)
            odd.push_back(inp);
    }
    sort(odd.begin(), odd.end());
    int ans = ans + odd[0];
    int z = 0;
    for(int i = odd.size() - 1; i >= 0; --i)
    {
        sum += odd[i];
        if(z%2 == 0)
            ans = max(ans, sum);
        z += 1;
    }
    cout<<ans << endl;
    return 0;
}
