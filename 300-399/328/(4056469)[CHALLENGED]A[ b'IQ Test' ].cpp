#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int *A = new int[4];
	for(int i = 0; i < 4; ++i)cin>>A[i];
	if(A[0]-A[1] == A[1]-A[2] && A[0]-A[1] == A[2]-A[3])
	{
		cout<<A[3]+A[3]-A[2];
	}
	else if(A[0]!=0&&A[1]!=0&&A[2]!=0&&A[3]!=0&&A[0]!=A[1]&&A[1]/A[0] == A[2]/A[1] && A[1]/A[0] == A[3]/A[2]&&!(A[3]*A[3]%A[2]))
	{
		cout<<A[3]*A[3]/A[2];
	}
	else
	{
		cout<<42;
	}
	return 0;
}