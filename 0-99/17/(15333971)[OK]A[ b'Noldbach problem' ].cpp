#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bitset<1001> A;
vector<int> P;

int main()
{
ios_base::sync_with_stdio(0);
	int n, k;
	cin>>n>>k;
	for(int i = 2; i <= n; ++i)
	{
		if(!A.test(i))
		{
			P.push_back(i);
			for(int j = i + i; j <= n; j += i)A.set(j);
		}
	}
	for(vector<int>::iterator i = P.begin(); i != P.end(); ++i)
	{
		if(*lower_bound(P.begin(), i, *i-1) + 1 == *i)--k;
		if(i+1!=P.end())*i += *(i+1);
	}
	cout<<(k<=0? "YES" : "NO");
	return 0;
}
