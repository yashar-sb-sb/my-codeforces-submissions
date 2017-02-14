#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<int> T[200001];
set<int> L[200001];

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    queue<int> q;
    cin>>n;
    for(int i = 1; i < n; ++i)
    {
    	int u, v;
    	cin>>u>>v;
    	T[u].insert(v);
    	T[v].insert(u);
    }
    for(int i = 1; i <= n; ++i)
    	if(T[i].size() == 1)
    	{
    		L[i].insert(0);
    		q.push(i);
    	}
    int ans = -1;
    while(!q.empty())
    {
    	int cur = q.front();
    	q.pop();
    	if(L[cur].size()>1)
    	{
    		if(ans < 0)
    			ans = cur;
    		else
    			return cout<<-1,0;
    	}
    	else if(T[cur].size() == 0)
    	{
    		if(ans < 0)
    			ans = cur;
    		else
    			return cout<<-1,0;
    	}
    	else
    	{
    		int next = *T[cur].begin();
    		L[next].insert(*L[cur].begin()+1);
    		L[cur].clear();
    		T[next].erase(cur);
    		T[cur].erase(next);
    		if(T[next].size()==1)
    			q.push(next);
    	}
    }
    if(L[ans].size()>2)
    	return cout<<-1,0;
    int res = 0;
    for(int i:L[ans])
    	res += i;
    while(res%2==0)res/=2;
    cout<<res<<endl;
   	return 0;
}