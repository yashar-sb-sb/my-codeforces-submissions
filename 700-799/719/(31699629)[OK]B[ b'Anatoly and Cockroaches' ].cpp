#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n;
int S[2][2];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    char cha;
    for(int i = 0; i < n; ++i)
    {
        cin>>cha;
        ++S[i&1][cha=='r'];
    }
    cout<<min(max(S[0][0], S[1][1]), max(S[0][1], S[1][0]))<<endl;
    return 0;
}
