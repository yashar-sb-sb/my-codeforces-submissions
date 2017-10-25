#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n;
string f, s;
char ans[300001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>f>>s;
    n = f.size();
    sort(f.begin(), f.end());
    sort(s.begin(), s.end(), greater<int>());
    auto fi = f.begin();
    auto si = s.begin();
    for(int i = 0; i < n; ++i)
    {
        if(!(i&1))
        {
            if(*fi < *si)
                ans[i] = *fi++;
            else
            {
                int til = (i+n)/2;
                for(; i < til; ++i)
                    ans[i] = *si++;
                for(; i < n; ++i)
                    ans[i] = *fi++;
            }
        }
        else
        {
            if(*si > *fi)
                ans[i] = *si++;
            else
            {
                int til = (i+n)/2;
                for(; i < til; ++i)
                    ans[i] = *fi++;
                for(; i < n; ++i)
                    ans[i] = *si++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
