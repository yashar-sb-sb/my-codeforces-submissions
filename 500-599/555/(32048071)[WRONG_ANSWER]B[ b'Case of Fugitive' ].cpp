#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL L[200002];
LL R[200002];
pair<LL,int> B[200002];
int In[200002];
int Out[200002];
int ans[200002];

bool compIn(int i, int j)
{
    return L[i+1] - R[i] < L[j+1] - R[j];
}

bool compOut(int i, int j)
{
    return R[i+1] - L[i] < R[j+1] - L[j];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
        cin>>L[i]>>R[i];
    for(int i = 0; i < m; ++i)
    {
        cin>>B[i].first;
        B[i].second = i+1;
    }
    sort(B, B+m);
    for(int i = 0;i < n-1; ++i)
        In[i] = Out[i] = i+1;
    sort(In, In+n-1, compIn);
    sort(Out, Out+n-1, compOut);
    int in = 0, out = 0;
    int b = 0;
    int chance = m-n+1;
    while(in<n-1 && out<n-1 && b < m)
    {
        if(B[b].first<=R[Out[out]+1]-L[Out[out]] && B[b].first >= L[Out[out]+1]-R[Out[out]])
            ans[Out[out]] = B[b].second;
        else if(B[b].first<=R[In[in]+1]-L[In[in]] && B[b].first >= L[In[in]+1]-R[In[in]])
            ans[In[in]] = B[b].second;
        else if(--chance<0)
            break;
        ++b;
        while(in < n-1 && ans[In[in]])
            ++in;
        while(out < n-1 && ans[Out[out]])
            ++out;
    }
    if(chance<0)
        return cout<<"No"<<endl, 0;
    cout<<"Yes"<<'\n';
    for(int i = 1; i < n; ++i)
        cout<<ans[i]<<' ';
    cout<<endl;
    return 0;
}
