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
    f.erase(n/2+n%2, n);
    s.erase(n/2, n);
    auto fi = f.begin();
    auto si = s.begin();
    auto fn = f.rbegin();
    auto sn = s.rbegin();
    int l = 0, r = n-1;
    for(int i = 0; i < n; ++i)
    {
        if(!(i&1))
        {
            if(*fi < *si)
                ans[l++] = *fi++;
            else
            {
                for(int j = i+2; j < n; ++j)
                    ++fi;
                for(int j = i+3; j < n; ++j)
                    ++si;
                for(; i < n; ++i)
                    if(i&1)
                        ans[r--] = *sn++;
                    else
                        ans[r--] = *fn++;
            }
        }
        else
        {
            if(*si > *fi)
                ans[l++] = *si++;
            else
            {
                for(int j = i+2; j < n; ++j)
                    ++si;
                for(int j = i+3; j < n; ++j)
                    ++fi;
                for(; i < n; ++i)
                    if(i&1)
                        ans[r--] = *fn++;
                    else
                        ans[r--] = *sn++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
