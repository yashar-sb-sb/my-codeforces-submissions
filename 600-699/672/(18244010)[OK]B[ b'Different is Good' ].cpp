#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A['z'+1];

int main()
{
ios_base::sync_with_stdio(0);
	int n,r = 0;
	cin>>n;
	char c;
	if(n>26)return cout<<-1,0;
	while(n--)
	{
		cin>>c;
		++A[c];
	}
	for(int i = 'a'; i <= 'z'; ++i)
	{
		r += max(0,A[i]-1);
	}
	cout<<r<<endl;
	return 0;
}
