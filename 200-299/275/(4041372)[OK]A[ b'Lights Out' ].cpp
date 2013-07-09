#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include <map>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[5][5];

int main()
{
	int inp;
	for(int i = 1; i < 4; ++i)
		for(int j = 1; j < 4; ++j)
		{
			cin>>inp;
			A[i][j]+=inp+1;
			A[i+1][j]+=inp;
			A[i-1][j]+=inp;
			A[i][j+1]+=inp;
			A[i][j-1]+=inp;
		}
	
	for(int i = 1; i < 4; ++i)
	{
		for(int j = 1; j < 4; ++j)
			cout<<A[i][j]%2;
		cout<<endl;
	}
	return 0;
}