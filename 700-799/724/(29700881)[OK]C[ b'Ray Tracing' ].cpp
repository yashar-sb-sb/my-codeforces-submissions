#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


vector<pii> md[200002], ad[200002];
bool Md[200002], Ad[200002];
map<pii,LL> M;
pii All[100000];


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, k, a, b;
    cin>>n>>m>>k;
    for(int i = 0; i < k; ++i)
    {
        cin>>a>>b;
        All[i] = pii(a,b);
        md[100000+a-b].push_back(pii(a,b));
        ad[a+b].push_back(pii(a,b));
    }
    for(int i = 0; i < 200002; ++i)
    {
        sort(md[i].begin(), md[i].end());
        sort(ad[i].begin(), ad[i].end());
    }
    vector<int> d = {1,1};
    LL cur = 0, t;
    int x=0, y=0;
    int ind;
    while(true)
    {
        t = cur;
        if(d[0]*d[1] > 0)
        {
            ind = 100000+x-y;
            if(Md[ind])
                break;
            Md[ind] = true;
            if(!md[ind].empty())
            {
                if(d[0]>0)
                {
                    for(pii i:md[ind])
                    {
                        cur = t + i.first - x;
                        if(M.find(i) == M.end())
                            M[i] = cur;
                    }
                }
                else
                {
                    for(auto it = md[ind].rbegin(); it != md[ind].rend(); ++it)
                    {
                        pii i = *it;
                        cur = t + x - i.first;
                        if(M.find(i) == M.end())
                            M[i] = cur;
                    }
                }
            }
        }
        else
        {
            ind = x+y;
            if(Ad[ind])
                break;
            Ad[ind] = true;
            if(!ad[ind].empty())
            {
                if(d[0]>0)
                {
                    for(pii i:ad[ind])
                    {
                        cur = t + i.first - x;
                        if(M.find(i) == M.end())
                            M[i] = cur;
                    }
                }
                else
                {
                    for(auto it = ad[ind].rbegin(); it != ad[ind].rend(); ++it)
                    {
                        pii i = *it;
                        cur = t + x - i.first;
                        if(M.find(i) == M.end())
                            M[i] = cur;
                    }
                }
            }
        }
        a = x;
        if(d[0]>0)
            a = n - x;
        b = y;
        if(d[1]>0)
            b = m - y;
        a = min(a,b);
        b = min(a,b);
        x += d[0]*a;
        y += d[1]*b;
        if(x == 0 || x == n)
            d[0] *= -1;
        if(y == 0 || y == m)
            d[1] *= -1;
        cur = t + a;
    }
    for(int i = 0; i < k; ++i)
    {
        cur = M[All[i]];
        if(!cur)
            cur = -1;
        cout<<cur<<'\n';
    }
    return 0;
}
