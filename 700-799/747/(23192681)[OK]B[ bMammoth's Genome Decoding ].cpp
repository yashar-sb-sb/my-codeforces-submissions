#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;
int A[1000];
int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	if(n%4)return cout<<"===",0;
	string s,pat = "ACGT";
	cin>>s;
	for(auto i:s)if(i!='?'&&++A[i]>n/4)return cout<<"===",0;;
	int ind = 0;
	for(int i = 'A'; i < 'Z'; ++i)
	{
		if(pat.find(i)!=-1)for(int j = A[i]; j < n/4; ++j)
		{
			while(s[ind]!='?')++ind;
			s[ind] = i;
		}
	}
	cout<<s<<endl;
	return 0;
}