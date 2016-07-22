#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int X[8],Y[8];
bool A[4][4];

int main()
{
ios_base::sync_with_stdio(0);
	int xmi = 1e6, xma = 0, ymi = 1e6, yma = 0;
	int x, y;
	set<int> xx,yy;
	for(int i = 0; i < 8; ++i)
	{
		cin>>X[i]>>Y[i];
		xx.insert(X[i]);
		yy.insert(Y[i]);
		xmi = min(X[i],xmi);
		xma = max(X[i],xma);
		ymi = min(Y[i],ymi);
		yma = max(Y[i],yma);
	}
	for(int i = 0; i < 8; ++i)
	{
		x = 1, y = 1;
		if(X[i] == xmi)x=0;
		else if(X[i] == xma)x=2;
		if(Y[i] == ymi)y=0;
		else if(Y[i] == yma)y=2;
		A[x][y] = 1;
	}
	int sum = 0;
	A[1][1] = 0;
	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 3; ++j)
			sum += A[i][j];
	cout<<(sum == 8 && yy.size() == 3 && xx.size() == 3 ? "respectable" : "ugly" )<<endl;
	return 0;
}
