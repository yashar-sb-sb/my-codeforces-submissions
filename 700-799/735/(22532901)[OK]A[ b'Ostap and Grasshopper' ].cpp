#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char S[300];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,i;
	cin>>n>>k>>S;
	for(i = 0; S[i] != 'T' && S[i] != 'G'; ++i); 
	for(i = i+k ; S[i] && S[i]!='T' && S[i]!='G' && S[i] !='#'; i+=k);
	cout<<(S[i]=='T' || S[i]=='G'?"YES":"NO")<<endl;
}