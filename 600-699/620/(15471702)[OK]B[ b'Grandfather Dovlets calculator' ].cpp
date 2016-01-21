#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main()
{
ios_base::sync_with_stdio(0);
	int a, b, c = 0, t;
	cin>>a>>b;
	while(a<=b)
	{
		t = a;
		while(t)
		{
			c+=A[t%10];
			t/=10;
		}
		++a;
	}
	cout<<c;
	return 0;
}
