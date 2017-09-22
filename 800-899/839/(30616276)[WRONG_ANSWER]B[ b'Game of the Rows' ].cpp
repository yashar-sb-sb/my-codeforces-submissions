#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n, k;
vector<int> v;
int A[5];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    A[2] = 2*n;
    A[4] = n;
    for(int i = 0; i < k; ++i)
    {
        int inp;
        cin>>inp;
        v.push_back(inp);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int &inp :v)
    {
        int s;
        for(int j = 4; j > 0; --j)
        {
            s = min(A[j], inp/j);
            inp -= s*j;
            A[j] -= s;
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int &inp :v)
    {
        if(inp == 3 && A[1] && A[2])
        {
            inp = 0;
            --A[1];
            --A[2];
        }
        if(inp == 2 && A[1] > 1)
        {
            inp = 0;
            A[1] -= 2;
        }
        if(inp == 1 && A[1])
        {
            inp = 0;
            --A[1];
        }
        for(int j = 4; j > 0 && inp; --j)
        {
            while(A[j] && inp)
            {
                if(j > inp)
                {
                    ++A[j-inp-1];
                    --A[j];
                    inp = 0;
                }
                else
                {
                    --A[j];
                    inp -= j;
                }
            }
        }
        if(inp)
            return cout<<"NO"<<endl, 0;
    }
    cout<<"YES"<<endl;
    return 0;
}
    int inp;
