#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100001];
int B[100001];
int n;
vector<int> ans;

void go(int ind)
{
    if(A[ind] && !B[ind])
        return;
    if(ind<1 || ind>n)
        return;
    ans.push_back(ind);
    B[ind] = 0;
    if(A[ind] == 0)
    {
        B[ind-1] = B[ind+1] = 1;
    }
    A[ind] = 1;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i = 2; i <= n; i += 2)
        go(i);
    for(int i = 1; i <= n; i += 2)
        go(i);
    for(int i = 2; i <= n; i += 2)
        go(i);
    cout<<ans.size()<<endl;
    for(int i:ans)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
