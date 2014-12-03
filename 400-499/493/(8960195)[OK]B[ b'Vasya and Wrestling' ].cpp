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

int A[200000], B[200000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a=0,b=0,inp;
	LL s=0;
	cin>>n;
	while(n--)
	{
		cin>>inp;
		s+=(LL)inp;
		if(inp>0)A[a++]=inp;
		else B[b++]=-inp;
	}
	if(s>0)cout<<"first";
	else if(s<0)cout<<"second";
	else
	{
		for(int i = 0; i < min(a,b); ++i)
		{
			if(A[i]>B[i]){cout<<"first"; return 0;}
			else if(A[i]<B[i]){cout<<"second"; return 0;}
		}
		if(a>b)cout<<"first";
		else if(b>a)cout<<"second";
		else if(inp>0)cout<<"first";
		else cout<<"second";
	}
	return 0;
}
