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
	string a, b;
	cin>>a>>b;
	int l = a.size();
	if(l == b.size())
	{
		int i;
		for(i = 0; i < l; ++i)
		{
			if(a[i]!=b[l-1-i])
			{
				break;
			}
		}
		if(i == l)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}