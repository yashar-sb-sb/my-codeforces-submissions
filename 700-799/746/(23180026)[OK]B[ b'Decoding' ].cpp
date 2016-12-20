#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char S[2001];

int main()
{
	ios_base::sync_with_stdio(0);
	int n, l = 0, r;
	string s;
	cin>>n>>s;
	r = n-1;
	bool z = 1;
	for(int i = n-1; i >= 0; --i)
	{
		if(z)S[r--] = s[i];
		else S[l++] = s[i];
		z = !z;
	}
	cout<<S<<endl;
	return 0;
}