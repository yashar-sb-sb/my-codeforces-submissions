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

char A[1002];

int main()
{
ios_base::sync_with_stdio(0);
	int i;
	A[0]='0';
	cin>>A+1;
	for(i = 0; A[i]!='.'; ++i);
	if(A[i-1] == '9')cout<<"GOTO Vasilisa.";
	else if(A[i+1]<'5')for(i = 1; A[i]!='.'; ++i)cout<<A[i];
	else
	{
		++A[--i];
		for(; i>0; --i)
		{
			A[i-1]+=(A[i]-'0')/10;
			A[i]= '0'+(A[i]-'0')%10;
		}
		for(i = A[i]=='0'; A[i]!='.'; ++i)cout<<A[i];
	}
	return 0;
}