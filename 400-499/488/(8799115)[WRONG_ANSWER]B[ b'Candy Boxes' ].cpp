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

int A[4];
vector<int> v;

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	bool f = false;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A,A+n);
	if(n==0)A[0]=1,A[1]=1,A[2]=3,A[3]=3;
	else if(n==1)A[3] = 3 * A[0], A[1] = A[0], A[2] = A[3];
	else if(n==2)A[3] = 3 * A[0], A[2] = A[3] - A[1] + A[0];
	else if(n==3)
	{
		A[3] = 3*A[0];
		if(A[3] == A[2])A[2] = A[2] = A[3] - A[1] + A[0],f = true;
	}
	if(A[3] == 3*A[0]&&A[0]+A[3] == A[1]+A[2]&&A[3]>=A[1])
	{
		cout<<"YES";
		if(f)swap(A[2],A[3]);
		for(int i = n; i < 4; ++i)cout<<'\n'<<A[i];
	}
	else cout<<"NO";
	return 0;
}
