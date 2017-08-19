#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1000];
int B[1000];
int C[1000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    for(int i = 0; i < n; ++i)
        cin>>B[i];
    for(int i = 0; i < n; ++i)
        if(A[i] == B[i])
            C[i] = A[i];
    vector<int> c;
    set<int> all;
    for(int i = 1; i <= n; ++i)
        all.insert(i);
    int a = 0, b = 0;
    for(int i = 0; i < n; ++i)
        if(C[i] == 0)
            c.push_back(i);
        else
            all.erase(C[i]);
    {
        auto i = c.begin();
        auto j = all.begin();
        for(; i != c.end(); ++i, ++j)
        {
            C[*i] = *j;
            if(A[*i] != C[*i]) ++a;
            if(B[*i] != C[*i]) ++b;
        }
    }
    if(a!=1 || b!=1)
        swap(C[c[0]], C[c[1]]);
    for(int i = 0; i < n; ++i)
        cout<<C[i]<<' ';
    cout<<endl;
    return 0;
}
