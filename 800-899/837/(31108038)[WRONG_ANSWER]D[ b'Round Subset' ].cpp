#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200];
int B[200];
vector<vector<int>> P(200, vector<int>(6001, -2e9));
vector<vector<int>> C(200, vector<int>(6001, -2e9));

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    for(int i = 0; i < n; ++i)
    {
        LL inp;
        cin>>inp;
        while(inp%2==0)
        {
            ++B[i];
            inp /= 2;
        }
        while(inp%5==0)
        {
            ++A[i];
            inp /= 5;
        }
    }
    for(int i = 0; i <= A[0]; ++i)
        P[1][i] = B[i];
    for(int i = 1; i < n; ++i)
    {
        for(int j = 1; j <= k; ++j)
        {
            for(int l = 0; l <= 6000; ++l)
            {
                C[j][l] = P[j][l];
                if(l-A[i]>=0)
                    C[j][l] = max(C[j][l], (P[j-1][l-A[i]]+B[i]));
            }
        }
        swap(P, C);
    }
    int ans = 0;
    for(int i = 0; i < int(P[k].size()); ++i)
        ans = max(ans, min(i,P[k][i]));
    cout<<ans<<endl;
    return 0;
}
