#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int n,nn;
float s=0,i;

int main()
{
	cin>>n;
	nn=n;
	while(nn--)
	{
		cin>>i;
		s+=i;
	}
	cout.precision(12);
	cout<<s/n;
	return 0;
}