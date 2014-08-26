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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	int l = s.size();
	for(int i = 0; i < l; ++i)A[i] = s[l - i - 1]-'0';
	int _2=2, _3=3, _4=4;
	bool f = false;
	while(l>1||A[0]>1)
	{
		_2*=_2;
		_3*=_3;
		_4*=_4;
		f = true;
		if(A[0]%2)
		{
			--A[0];
			_2*=2;
			_3*=3;
			_4*=4;
		}
		A[0]/=2;
		for(int i = 1; i < l; ++i)A[i-1]+=5*(A[i]&1), A[i]/=2;
		if(!A[l-1])--l;
		_2%=5;
		_3%=5;
		_4%=5;
	}
	cout<<(1+_2+_3+_4)%5;
	return 0;
}