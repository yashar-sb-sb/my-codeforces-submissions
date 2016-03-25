#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int h1, h2, a, b;
	cin>> h1>> h2 >> a>> b;
	h1 += a * 8;
	cout <<(h2 - h1 <= 0 ? 0 : (a-b <= 0 ? -1 : (h2 - h1 - 1)/(12*(a-b))+1));
	return 0;
}
