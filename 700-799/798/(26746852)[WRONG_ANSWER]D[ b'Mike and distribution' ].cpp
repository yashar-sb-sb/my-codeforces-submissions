#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[100000], B[100000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>A[i].first;
        A[i].second = i + 1;
    }
    for(int i = 0; i < n; ++i)
    {
        cin>>B[i].first;
        B[i].second = i + 1;
    }
    sort(A, A + n);
    sort(B, B + n);
    int k = n/2 + 1;
    set<int> ans;
    for(int i = 1; i <= n; ++i)
        ans.insert(i);
    int t = 0;
    while(k < (int)ans.size())
    {
        if(t%2)
        {
            ans.erase(A[t/2].second);
        }
        else
        {
            ans.erase(B[t/2].second);
        }
        ++t;
    }
    cout<<k<<endl;
    for(int i:ans)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
