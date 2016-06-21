#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,h,k,s=0,inp=0,cou=0;
	cin>>n>>h>>k;
	do
	{
		if(s+inp <= h)
		{
			s+=inp;
			inp = 0;
			while(n)
			{
				cin>>inp;
				--n;
				if(s+inp<=h){s+=inp; inp=0;}
				else break;
			}
		}
		if(s && s<k)s = k;
		cou+=s/k;
		s %= k;
	}
	while(n||s||inp);
	cout<<cou<<endl;
	return 0;
}
