#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int D[2][int(2e5+1)];

int main()
{
ios_base::sync_with_stdio(0);
	string a,b;
	cin>>a>>b;
	for(int i = 1; i <= b.size(); ++i)
	{
		D[0][i] = D[0][i-1];
		D[1][i] = D[1][i-1];
		++D[b[i-1]-'0'][i];
	}
	LL s = 0;
	for(int i = 1; i <= a.size(); ++i)s += D['1' - a[i-1]][b.size()-a.size()+i] - D['1' - a[i-1]][i-1];
	cout<<s<<endl;
	return 0;
}
