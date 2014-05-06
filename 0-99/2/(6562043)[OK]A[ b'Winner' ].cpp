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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<string,int> mapp;
map<string,int> mapn;
int main()
{
ios_base::sync_with_stdio(0);
	int m=0,p,n;
	string name[1000];
	int points[1000];
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>name[i]>>points[i];
		mapp[name[i]]+=points[i];
	}
	for(map<string,int>::iterator it = mapp.begin(); it!=mapp.end(); it++)
	{
		if(m<(*it).second)m=(*it).second;
	}
	for(int i = 0; i < n; ++i)
	{
		mapn[name[i]]+=points[i];
		if(mapn[name[i]]>=m&&mapp[name[i]]==m){cout<<name[i];break;}
	}
	return 0;
}