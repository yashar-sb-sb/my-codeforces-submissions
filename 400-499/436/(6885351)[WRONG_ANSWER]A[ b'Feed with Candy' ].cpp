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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int M1[2000],M2[2000],H1[2000],H2[2000],A1[2000],A2[2000];

bool f1(int i, int j)
{
	return H1[i]<H1[j]||(H1[i]==H1[j]&&M1[i]>M1[j]);
}
bool f2(int i, int j)
{
	return H2[i]<H2[j]||(H2[i]==H2[j]&&M2[i]>M2[j]);
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,x,t,h,m,_1=0,_2=0;
	cin>>n>>x;
	for(int i = 0; i < n; ++i)
	{
		cin>>t>>h>>m;
		if(t)
		{
			H2[_2]=h;
			M2[_2]=m;
			++_2;
		}
		else
		{
			H1[_1]=h;
			M1[_1]=m;
			++_1;
		}
	}
	for(int i = 0; i < _1; ++i)A1[i]=i;
	for(int i = 0; i < _2; ++i)A2[i]=i;
	sort(A1,A1+_1,f1);
	sort(A2,A2+_2,f2);
	int c1=0,c2=0,cx=x;
	while(true)
	{
		if(c1<_1 && cx>=H1[A1[c1]])
		{
			cx+=M1[A1[c1]];
			++c1;
		}
		else break;
		
		if(c2<_2 && cx>=H2[A2[c2]])
		{
			cx+=M2[A2[c2]];
			++c2;
		}
		else break;
	}
	m = c1+c2;
	c1=0,c2=0,cx=x;
	while(true)
	{
		if(c2<_2 && cx>=H2[A2[c2]])
		{
			cx+=M2[A2[c2]];
			++c2;
		}
		else break;
		
		if(c1<_1 && cx>=H1[A1[c1]])
		{
			cx+=M1[A1[c1]];
			++c1;
		}
		else break;
	}
	cout<<max(m,c1+c2);
	return 0;
}