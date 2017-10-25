#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char S[200001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, t;
    cin>>n>>t>>S;
    int ind = 0;
    while(S[ind]!='.')
        ++ind;
    while(S[ind]<'5'&&S[ind]!='\0')
        ++ind;
    while(t--)
    {
        while(S[ind]<'5' && S[ind] != '.')
            --ind;
        if(S[ind] == '.')
            break;
        S[ind] = '\0';
        --ind;
        while(S[ind] != '.')
        {
            if(S[ind]!='9')
            {
                ++S[ind];
                break;
            }
            S[ind--] = '\0';
        }
        if(S[ind] == '.')
        {
            S[ind--] = '\0';
            while(ind>=0)
            {
                if(S[ind]!='9')
                {
                    ++S[ind];
                    break;
                }
                S[ind--] = '0';
            }
            if(ind < 0)
                cout<<1;
        }
    }
    cout<<S<<endl;
    return 0;
}
