#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL p,d,a=0;
	cin>>p>>d;
	while(a<=d&&a<p)
	{
		p-=a;
		d-=a;
		a = 0;
		LL t = p,k=1;
		while(t%10==9)
		{
			a +=  t%10 * k;
			k*=10;
			t/=10;
		}
		a +=  t%10 * k +1;
	}
	cout<<p<<endl;
	return 0;
}
