#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[20];
int a,b;

int f(int s, int i)
{
	if(i < 0)return s > b;
	int r = 0,c = 1;
	for(int j = 0; j <= A[i].second; ++j)
	{
		r += f(s*c,i-1);
		c *= A[i].first;
	}
	return r;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>a>>b;
	if(a==b)return cout<<"infinity",0;
	if(a==0)return cout<<0,0;
	int j = -1;
	a -= b;
	for(int i = 2; i*i <= a; ++i)
	{
		if(!(a%i))
		{
			++j;
			A[j].first = i;
			while(!(a%i))
			{
				a/=i;
				++A[j].second;
			}
		}
	}
	if(a != 1)
	{
		++j;
		A[j].first = a;
		A[j].second = 1;
	}
	cout<<f(1,j);
	return 0;
}
