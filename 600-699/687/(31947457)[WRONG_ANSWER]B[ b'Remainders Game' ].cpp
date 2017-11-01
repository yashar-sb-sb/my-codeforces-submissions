#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool can[20];
vector<pii> A;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    for(int i = 2; i*i <= k; ++i)
    {
        int count = 0;
        while(k % i == 0)
        {
            ++count;
            k /= i;
        }
        A.push_back(pii(i, count));
    }
    if(k>1)
        A.push_back(pii(k, 1));
    while(n--)
    {
        int c;
        cin>>c;
        for(int i = 0; i < int(A.size()); ++i)
        {
            if(can[i])
                continue;
            int count = 0;
            while(c%A[i].first)
            {
                ++count;
                c /= A[i].first;
            }
            if(c>=A[i].second)
                can[i] = true;
        }
    }
    for(int i = 0; i < int(A.size()); ++i)
        if(!can[i])
            return cout<<"No\n", 0;
    cout<<"Yes\n";
    return 0;
}
