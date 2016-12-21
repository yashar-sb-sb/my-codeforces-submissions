#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

#define g(x) A[(x=='D')]

int A[2];

int main()
{
	ios_base::sync_with_stdio(0);
	int n,p=-1;
	queue<char> q;
	char c;
	cin>>n;
	for(int i = 0; i < n; ++i){cin>>c;q.push(c);}
	while(!q.empty())
	{
		c = q.front();
		q.pop();
		if(g(c))q.push(c);
		else if(!(A[0]|A[1]))q.push(c);
		else p = -1;
		if(p++>n)break;
		++g(c);
		while(A[0]&&A[1])--A[0],--A[1];
	}
	cout<<c<<endl;
	return 0;
}