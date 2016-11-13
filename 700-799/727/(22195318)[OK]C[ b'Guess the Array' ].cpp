#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int A[5001];

int main()
{
ios_base::sync_with_stdio(0);
	int a,b,c,n;
	cin>>n;
	cout<<"? 1 2"<<endl;
	cin>>a;
	cout<<"? 2 3"<<endl;
	cin>>b;
	cout<<"? 1 3"<<endl;
	cin>>c;
	A[1] = (a-b+c)/2;
	A[2] = a-A[1];
	A[3] = c-A[1];
	for(int i = 4; i <= n; ++i)
	{
		cout<<"? 1 "<<i<<endl;
		cin>>a;
		A[i] = a-A[1];
	}
	cout<<'!';
	for(int i = 1; i <= n; ++i)cout<<' '<<A[i];
	cout<<endl;
	return 0;
}