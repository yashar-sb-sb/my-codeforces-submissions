#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include <map>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[3];

int main()
{
	int n,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		A[i%3]+=inp;
	}
	if(A[0]>A[1]&&A[0]>A[2])cout<<"chest";
	else if(A[1]>A[0]&&A[1]>A[2])cout<<"biceps";
	else cout<<"back";
	return 0;
}