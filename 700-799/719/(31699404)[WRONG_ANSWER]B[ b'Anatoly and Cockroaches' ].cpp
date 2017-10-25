#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n;
char S[100001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    cin>>S;
    int ans1 = 0;
    for(int i = 0; i < n; ++i)
    {
        if(i&1)
        {
            if(S[i] == 'r')
            {
                ++i;
                ++ans1;
            }
        }
        else
        {
            if(S[i] == 'b')
            {
                ++i;
                ++ans1;
            }
        }
    }
    int ans2 = 0;
    for(int i = 0; i < n; ++i)
    {
        if(i&1)
        {
            if(S[i] == 'b')
            {
                ++i;
                ++ans2;
            }
        }
        else
        {
            if(S[i] == 'r')
            {
                ++i;
                ++ans2;
            }
        }
    }
    cout<<min(ans1, ans2)<<endl;
    return 0;
}
