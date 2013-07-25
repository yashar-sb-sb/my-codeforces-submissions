#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,neg=0;
	cin >>n;
	for(int i = 0; i < n; ++i)
	{
		cin >>A[i];
		if(A[i]<0)++neg;
	}
	for(int i = 0; true; ++i)
	{
		if(A[i]<0)
		{
			cout<<"1 "<<A[i]<<'\n';
			A[i] = A[0];
			break;
		}
	}
	if(neg%2)
	{
		cout<<n-2;
		int i;
		for(i = 1; A[i]!=0 && i < n; ++i)
		{
			cout<<' '<<A[i];
		}
		++i;
		for( ; i < n; ++i)cout<<' '<<A[i];
		cout<<'\n';
		cout<<"1 0";
	}
	else
	{
		cout<<n-3;
		int i;
		for(i = 1; true; ++i)
		{
			if(A[i]<0)
			{
				swap(A[1],A[i]);
				break;
			}
		}
		for(i = 2; A[i]!=0 && i < n; ++i)
		{
			cout<<' '<<A[i];
		}
		++i;
		for( ; i < n; ++i)cout<<A[i]<<' ';
		cout<<'\n';
		cout<<"2 0 "<<A[1];
	}
	return 0;
}