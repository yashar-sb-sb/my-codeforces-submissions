#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b, f, k;
    cin>>a>>b>>f>>k;
    int d = 1;
    int fu = b;
    int p = 0;
    int ans = 0;
    while(k)
    {
        if(d>0)
        {
            if(p < f)
            {
                fu -= f-p;
                p = f;
            }
            else
            {
                fu -= a-p;
                p = a;
            }
        }
        else
        {
            if(p > f)
            {
                fu -= p-f;
                p = f;
            }
            else
            {
                fu -= p;
                p = 0;
            }
        }
        if(fu < 0)
            return cout<<-1<<endl, 0;
        if(p == f)
        {
            if(d>0)
            {
                if(k == 1)
                {
                    if(fu < a-p)
                    {
                        ++ans;
                        fu = b;
                    }
                }
                else if(fu<a+a-p-f)
                {
                    ++ans;
                    fu = b;
                }
            }
            else
            {
                if(k == 1)
                {
                    if(fu < f)
                    {
                        fu = b;
                        ++ans;
                    }
                }
                else if(fu < f + f)
                {
                    fu = b;
                    ++ans;
                }
            }
        }
        if(p == a || !p)
            --k, d *= -1;
    }
    cout<<ans<<endl;
    return 0;
}
