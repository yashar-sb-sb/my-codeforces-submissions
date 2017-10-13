#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1001];
int n;



bool f(int f1, int f2)
{
    int mx = f2 - f1;
    int my = A[f2] - A[f1];
    int s = 0;
    for(int i = 1; i <= n; ++i)
        if(mx * A[f1] + (i-f1) * my != A[i] * mx)
        {
            s = i;
            break;
        }
    if(s == 0)
        return false;
    for(int i = s+1; i <= n; ++i)
        if(mx * A[s] + (i-s) * my != A[i] * mx && mx * A[f1] + (i-f1) * my != A[i] * mx)
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    cout<<(f(1,2) || f(1,3) || f(2,3) ? "Yes" : "No")<<endl;
    return 0;
}
