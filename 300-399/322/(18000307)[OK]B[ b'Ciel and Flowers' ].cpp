#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

#define mi(a,b,c) min(a, min(b,c))
#define ma(a,b,c) max(a, max(b,c))

int main()
{
ios_base::sync_with_stdio(0);
	int a,b,c;
	cin>>a>>b>>c;
	cout<<ma(a/3 + b/3 + c/3 + mi(a%3, b%3, c%3),
		(mi(a,b,c)<1?-10:0) + (a+1)/3 + (b+1)/3 + (c+1)/3 + mi((a+1)%3, (b+1)%3,(c+1)%3) - 1,
	       	(mi(a,b,c)<2?-10:0) + (a+2)/3 + (b+2)/3 + (c+2)/3 + mi((a+2)%3, (b+2)%3,(c+2)%3) - 2);
	return 0;
}
