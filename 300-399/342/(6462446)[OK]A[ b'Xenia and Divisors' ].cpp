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

int main()
{
ios_base::sync_with_stdio(0);
	int n,A[7],i;
	fill(A,A+7,0);
	cin>>n;
	while(n--)
	{
		cin>>i;
		if(i==7||i==5){cout<<-1;return 0;}
		++A[i];
	}
	if(A[1] == A[2]+A[3] && A[1] == A[4]+A[6] && A[2] >= A[4])
	{
		while(A[4]--){cout<<"1 2 4\n"; --A[2];}
		while(A[2]--){cout<<"1 2 6\n"; --A[6];}
		while(A[6]--)cout<<"1 3 6\n";
	}
	else cout<<-1;
	return 0;
}