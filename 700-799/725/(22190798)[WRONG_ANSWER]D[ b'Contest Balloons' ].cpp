#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

multiset<LL> m;
pii A[300000];

int main()
{
ios_base::sync_with_stdio(0);
	LL n,pos;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i].first>>A[i].second;
	pos = n-1;
	sort(A+1,A+n);
	LL ans = 300000;
	m.insert(-1);
	bool fl = true;
	while(!m.empty()&&fl)
	{
		fl = bool(pos);
		LL cur = *m.begin();
		m.erase(m.begin());
		A[0].first-=cur+1LL;
		if(A[0].first<0LL)break;
		while(A[0].first<A[pos].first)
			m.insert(A[pos].second-A[pos].first),--pos;
		ans = min(ans,(LL)m.size()+1LL);
	}
	cout<<ans<<endl;
	return 0;
}