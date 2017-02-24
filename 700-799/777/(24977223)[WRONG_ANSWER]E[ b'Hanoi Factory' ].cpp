#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;
typedef pair<pii,LL> piii;

#define A first.first
#define H first.second
#define ans second

map<int,piii> m;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
    	LL a,b,h;
    	cin>>a>>b>>h;
    	m[b].A = m[b].A?min(m[b].A,a):a;
    	m[b].H += h;
    	m[b].ans += h;
    }
    LL ma = 0;
    for(auto it = m.begin(); it != m.end(); ++it)
    {
    	piii &cur = it->second;
    	ma = max(ma, cur.ans);
    	if(m.begin() == it)continue;
    	piii &p = prev(it)->second;
    	if(prev(it)->first<=cur.A)continue;
    	cur.ans += p.ans;
    	ma = max(ma, cur.ans);
    }
    cout<<ma<<endl;
    return 0;
}