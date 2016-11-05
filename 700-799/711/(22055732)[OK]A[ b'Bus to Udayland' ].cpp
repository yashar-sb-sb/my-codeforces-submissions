#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[1000][6];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	bool fl = false;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
		if(!fl && A[i][0] == 'O' && A[i][1] == 'O')
		{
			A[i][0] = A[i][1] = '+';
			fl = true;
		}
		if(!fl && A[i][3] == 'O' && A[i][4] == 'O')
		{
			A[i][3] = A[i][4] = '+';
			fl = true;
		}
	}
	if(fl)
	{
		cout<<"YES\n";
		for(int i = 0; i < n; ++i)cout<<A[i]<<'\n';
	}
	else cout<<"NO\n";
	return 0;
}