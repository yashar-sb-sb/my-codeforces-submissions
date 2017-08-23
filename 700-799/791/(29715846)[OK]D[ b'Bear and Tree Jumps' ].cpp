#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL all;
int k;
vector<int> T[200001];

vector<LL> f(int v, int p, vector<LL> A)
{

    A[k] += A[0];
    all += A[k];

    int t = A[k-1];
    for(int i = k-1; i > 0; --i)
        A[i] = A[i-1];
    A[0] = t;

    ++A[0];

    vector<LL> BB(k+1);

    for(auto i:T[v])
    {
        if(i!=p)
        {
            vector<LL> B = f(i, v, A);

            B[k] += B[0];
            t = B[k-1];
            for(int j = k-1; j > 0; --j)
                B[j] = B[j-1];
            B[0] = t;
            for(int j = 0; j <= k; ++j)
            {
                A[j] += B[j];
                BB[j] += B[j];
            }
        }
    }
    ++BB[0];
    return BB;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, a, b;
    cin>>n>>k;
    for(int i = 1; i < n; ++i)
    {
        cin>>a>>b;
        T[a].push_back(b);
        T[b].push_back(a);
    }
    for(int i = 1;; ++i)
    {
        if(T[i].size() == 1)
        {
            f(i,0, vector<LL>(k+1));
            break;
        }
    }
    cout<<all<<endl;
    return 0;
}
