#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,ind = 0,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[ind];
		if(A[ind])++ind;
	}
	while(cin>>inp,(!inp));
	for(ind = 0; A[ind]!=inp; ++ind);
	do
	{
		if(!inp)continue;
		if(inp!=A[ind])return cout<<"NO",0;
		ind = (ind+1)%(n-1);
	}while(cin>>inp);
	cout<<"YES";
	return 0;
}