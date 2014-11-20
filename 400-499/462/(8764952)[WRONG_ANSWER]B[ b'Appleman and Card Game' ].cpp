#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>
#include<cstdio>
#include<list>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[26];

int main()
{
ios_base::sync_with_stdio(0);
	int k;
	LL s=0;
	char c;
	cin>>k>>k;
	while(cin>>c)++A[c-'A'];
	sort(A,A+26);
	int i = 25;
	while(k)
	{
		s+=min(k,A[i])*min(k,A[i]);
		k-=min(A[i--],k);
	}
	cout<<s;
	return 0;
}
