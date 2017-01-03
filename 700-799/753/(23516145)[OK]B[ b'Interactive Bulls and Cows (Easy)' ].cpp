#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	//ios_base::sync_with_stdio(0);
	char no = '0'-1;
	int a,b;
	do
	{
		++no;
		cout<<no<<no<<no<<no<<endl;
		cin>>a>>b;
		if(a==4)return 0;
	}while(a+b>0);
	char A[4];
	memset(A,no,4);
	for(int i = 0; i < 4; ++i)
	{
		for(char j = '0'; j <= '9'; ++j)
		{
			if(j==no)continue;
			A[i] = j;
			for(int k = 0; k < 4; ++k)cout<<A[k];cout<<endl;
			cin>>a>>b;
			if(a==4)return 0;
			if(a==i+1)break;
		}
	}
	return 0;
}