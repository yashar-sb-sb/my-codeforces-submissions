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

int A[6];

int main()
{
ios_base::sync_with_stdio(0);
	cin>>A[0]>>A[1]>>A[2]>>A[3]>>A[4]>>A[5];
	sort(A,A+6);
	int c = 0,B[6],j=0;
	for(int i = 0; i < 6; ++i)
	{
		if(A[i]==A[2]&&c<4)++c;
		else B[j++]= A[i];
	}
	if(c>3)
	{
		sort(B,B+j);
		for(int i = 1; i < j; ++i)
		{
			if(B[i]!=B[i-1])
			{
				cout<<"Bear";
				return 0;
			}
		}
		cout<<"Elephant";
	}
	else cout<<"Alien";
	return 0;
}