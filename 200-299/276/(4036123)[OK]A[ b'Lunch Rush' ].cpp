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
	int n,k,f,t,m,i;
	cin>>n>>k>>f>>t;
	m = t > k ? f-t+k : f;
	while(--n)
	{
		cin>>f>>t;
		i = t > k ? f-t+k : f;
		if(i > m)
		{
			m = i;
		}
	}
	cout << m;
	return 0;
}