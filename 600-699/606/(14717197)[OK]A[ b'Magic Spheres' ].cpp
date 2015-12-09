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
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int a,b,c,x,y,z,co=0,cu=0;
	cin>>a>>b>>c>>x>>y>>z;
	int A[3] = {a-x,b-y,c-z};
	for(int i = 0; i < 3; ++i)
	{
		if(A[i]<0)co+=A[i];
		else cu+=A[i]/2;
	}
	cout<<(cu+co<0?"No":"Yes");
	return 0;
}
