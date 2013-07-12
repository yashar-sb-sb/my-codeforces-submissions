#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int n;
	cin>>n;
	char *a,*b;
	a = new char[n];
	b = new char[n];
	for(int i = 0; i < n; ++i)cin>>a[i];
	for(int i = 0; i < n; ++i)cin>>b[i];
	sort(a,a+n);
	sort(b,b+n);
	if(*a>*b)swap(a,b);
	for(int i = 0; i < n; ++i)
	{
		if(a[i]>=b[i])
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}