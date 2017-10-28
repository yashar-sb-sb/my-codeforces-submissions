#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool good[256];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s, p;
    cin>>s>>p;
    for(char c:s)
        good[int(c)] = true;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>s;
        bool can = true;
        int l = 0;
        while(l < int(s.size()) && l < int(p.size()) && p[l] != '*')
        {
            if(p[l] == '?')
            {
                if(!good[int(s[l])])
                {
                    can = false;
                    break;
                }
            }
            else if(s[l] != p[l])
            {
                can = false;
                break;
            }
            ++l;
        }
        if(!can)
        {
            cout<<"no\n";
            continue;
        }
        if(l == int(p.size()))
        {
            if(l == int(s.size()))
                cout<<"yes\n";
            else
                cout<<"no\n";
            continue;
        }
        int r = p.size()-1;
        int rs = s.size()-1;
        while(r >= 0 && rs >= 0 && p[r] != '*')
        {
            if(p[r] == '?')
            {
                if(!good[int(s[rs])])
                {
                    can = false;
                    break;
                }
            }
            else if(s[rs] != p[r])
            {
                can = false;
                break;
            }
            ++r;
            ++rs;
        }
        if(!can || l > r)
        {
            cout<<"no\n";
            continue;
        }
        for(int i = l; i <= rs; ++i)
            if(good[int(s[i])])
            {
                can = false;
                break;
            }
        cout<<(can ? "yes\n" : "no\n");
    }
    return 0;
}
