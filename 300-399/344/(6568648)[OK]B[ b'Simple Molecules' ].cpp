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

int A[3];

int f(int i, int j){return A[i]<A[j];}

int main()
{
ios_base::sync_with_stdio(0);
	int B[3]={0,1,2},C[3];
	cin>>A[0]>>A[1]>>A[2];
	sort(B,B+3,f);
	if(A[B[0]]+A[B[1]]<A[B[2]]||(A[0]+A[1]+A[2])%2){cout<<"Impossible";return 0;}
	C[(min(B[0],B[1])-abs(B[0]-B[1])/2+3)%3]=(A[B[0]]+A[B[1]]-A[B[2]])/2;
	C[(min(B[2],B[1])-abs(B[2]-B[1])/2+3)%3]=(A[B[2]]-A[B[1]]+A[B[0]])/2+A[B[1]]-A[B[0]];
	C[(min(B[0],B[2])-abs(B[0]-B[2])/2+3)%3]=(A[B[2]]-A[B[1]]+A[B[0]])/2;
	cout<<C[0]<<' '<<C[1]<<' '<<C[2];
	return 0;
}