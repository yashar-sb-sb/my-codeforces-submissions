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
	int A[6];
	int s=0,inp;
	for(int i = 1; i < 6; ++i)cin>>A[i];
	for(int i = 1; i < 6; ++i)
	{
		cin>> inp;
		s += max(i*150,(int)((250-A[i])*500*i/250 -50*inp));
	}
	cin>>inp;
	s+=100*inp;
	cin>>inp;
	s-=50*inp;
	cout<<s;
	return 0;
}
