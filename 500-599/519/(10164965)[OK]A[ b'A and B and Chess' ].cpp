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
#include<cstdio>
#include<list>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int S[256];

int main()
{
ios_base::sync_with_stdio(0);
	S['q'] = -9, S['r'] = -5, S['b'] = -3, S['n'] = -3, S['p'] = -1, S['k'] = 0, S['.'] = 0;
	S['Q'] = 9, S['R'] = 5, S['B'] = 3, S['N'] = 3, S['P'] = 1, S['K'] = 0;
	int s=0;
	char c;
	while(cin>>c)s+=S[c];
	if(s>0)cout<<"White";
	else if(s<0)cout<<"Black";
	else cout<<"Draw";
	return 0;
}
