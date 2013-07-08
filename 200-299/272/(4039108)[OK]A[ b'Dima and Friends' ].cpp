#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int a,n,i,s=0;
	cin>>n;
	a=n++;
	while(a--)
	{
		cin>>i;
		s+=i;
	}
	i = s%n;
	s=0;
	for(int j = 0; j < 5; ++j)if(!((j+i)%n))++s;
	cout<<5-s;
	return 0;
}