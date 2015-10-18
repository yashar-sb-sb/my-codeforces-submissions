
#include <bits/stdc++.h>
#include <stdio.h>
#define lli long long int
#define pii pair<int,int>
#define plli pair<lli,lli>
#define X first
#define Y second
using namespace std;

int s[1005];
int f[1005];
int t[1005];
bool d[1005];

bool sameDir(int x , int y)
{
	int tt = max(t[x],t[y]);
	int mm = min(t[x]+f[x]-s[x],t[y]+s[y]-f[y]);
	if (tt < mm) return false;
	int x1 = s[x] + (d[x]==1 ? tt-t[x] : t[x]-tt);
	int x2 = s[y] + (d[y]==1 ? tt-t[y] : t[y]-tt);
	return x1==x2;
}

/*bool difDir(int x , int y)
{
	int i = s[x] , j = s[y] , m;
	int it = 0;
	cout<<"\n";
	while ( (i <= j) )
	{
		m = (i+j) / 2;
		int tx = t[x] + (m - s[x]);
		int ty = t[y] + (s[y] - m);
		cout<<i<<" "<<j<<" "<<m<<"  ,  "<<tx<<" "<<ty<<"\n";
		if (tx == ty) return 1;
		if (tx < ty) i = m+1;
		else j = m-1;
		it++;
	}
	return 0;
}*/

bool difDir(int x , int y)
{
	//cout<<x<<" "<<y<<" , ";
	int tt = max(t[x],t[y]);
	int mm = min(t[x]+f[x]-s[x],t[y]+s[y]-f[y]);
	//cout<<tt<<" "<<mm<<"   ";
	//cout<<((tt-t[x])+s[x] <= s[y]-(tt-t[y]) && (mm-t[x])+s[x] >= s[y]-(mm-t[y]))<<"\n";
	return ((tt-t[x])+s[x] <= s[y]-(tt-t[y]) && (mm-t[x])+s[x] >= s[y]-(mm-t[y]));
}

bool check(int x, int y)
{
	// if ( s[x]<=s[y] ? f[x]<s[y] : f[y]<s[x] ) return 0;
	// cout<<x<<" "<<y<<"\n";
	if ( d[x] == d[y] )
	{
		return s[x]<=s[y] ? sameDir(x , y) : sameDir(y , x);
	}
	else
	{
		return d[x]==1 ? difDir(x , y) : difDir(y , x);
	}
}

int ans[1005] ;

int main()
{
	int n;
	cin>>n;
	
	for (int i=1 ; i<=n ; i++) { cin>>t[i]>>s[i]>>f[i]; d[i] = s[i]<f[i] ? 1 : 0; }
	
	for (int i=2 ; i<=n ; i++)
	{
		for (int j=1 ; j<i ; j++)
		{
			bool b = check(i , j);
			ans[i] += b;
			ans[j] += b;
		}
	}
	
	for (int i=1 ; i<=n ; i++) cout<<ans[i]<<" ";
	return 0;
}