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
    int l = 0, r = n-1;
    for(int i = 0; i < n; ++i)
    {
        if(!(i&1))
        {
            if(*fi < *si)
                ans[l++] = *fi++;
            else
            {
                for(int j = i; j < n-2; ++j)
                    ++fi;
                for(int j = i+1; j < n-2; ++j)
                    ++si;
                for(; i < n; ++i)
                    if(i&1)
                        ans[r--] = *si--;
                    else
                        ans[r--] = *fi--;
            }
        }
        else
        {
            if(*si > *fi)
                ans[l++] = *si++;
            else
            {
                for(int j = i; j < n-2; ++j)
                    ++si;
                for(int j = i+1; j < n-2; ++j)
                    ++fi;
                for(; i < n; ++i)
                    if(i&1)
                        ans[r--] = *fi--;
                    else
                        ans[r--] = *si--;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
