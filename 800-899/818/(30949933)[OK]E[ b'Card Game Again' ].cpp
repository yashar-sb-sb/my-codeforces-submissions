#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];

vector<pii> K;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    for(int i = 2; i*i <= k; ++i)
    {
        if(k % i == 0)
        {
            pii cur(i, 0);
            while(k%i == 0)
            {
                ++cur.second;
                k /= i;
            }
            K.push_back(cur);
        }
    }
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    if(k>1)
        K.push_back(pii(k,1));
    vector<int> mask(K.size());
    int l = 0;
    LL ans = 0;
    for(int r = 0; r < n; ++r)
    {
        for(int i = 0; i < int(K.size()); ++i)
        {
            int t = A[r];
            while(t % K[i].first == 0)
            {
                ++mask[i];
                t /= K[i].first;
            }
        }
        while(l < r)
        {
            bool revert = false;
            for(int i = 0; i < int(K.size()); ++i)
            {
                int t = A[l];
                while(t % K[i].first == 0)
                {
                    --mask[i];
                    t /= K[i].first;
                }
                if(K[i].second>mask[i])
                    revert = true;
            }
            if(revert)
            {
                for(int i = 0; i < int(K.size()); ++i)
                {
                    int t = A[l];
                    while(t % K[i].first == 0)
                    {
                        ++mask[i];
                        t /= K[i].first;
                    }
                }
                break;
            }
            ++l;
        }
        bool skip = false;
        for(int i = 0; i < int(K.size()); ++i)
        {
            if(K[i].second > mask[i])
                skip = true;
        }
        if(!skip)
        {
            ans += LL(l+1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
