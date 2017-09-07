#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100];
int S[100];
multiset<int> pool;
multiset<int> poo;
int n, k, M;

void del(int d)
{
    M -= A[d];
    pool.erase(pool.find(d));
    poo.erase(poo.find(k-d));
    if(d+1 != k)
        poo.insert(k-d-1);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k>>M;
    for(int i = 0; i < k; ++i)
        cin>>A[i];
    sort(A, A+k);
    for(int i = 50; i >= 0; --i)
        S[i] += S[i+1]+A[i];
    for(int i = 0; i < n*k; ++i)
        pool.insert(i/n);
    int p = 0;
    for(int i = 0; i < n; ++i)
        poo.insert(k);
    while(M>0)
    {
        if(pool.empty())
            break;
        int t = *poo.begin();
        if(S[k-t] > M)
        {
            int d = *pool.begin();
            if(A[d] > M)
                break;
            del(d);
            ++p;
            continue;
        }
        int pp = 1 + t;
        int sum = 0;
        int tp = pp;
        for(int i:pool)
        {
            sum += A[i];
            if(!--tp)
                break;
        }
        if(sum < S[k-t])
        {
            ++p;
            del(*pool.begin());
        }
        else
        {
            p += pp;
            for(int i = k-t; i < k; ++i)
                del(i);
        }
    }
    cout<<p<<endl;
    return 0;
}
