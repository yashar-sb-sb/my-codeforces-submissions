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
#include<set>
#include<limits>


using namespace std;


int n;

struct paii
{
	long double first;
	long double second;
	int ind;
};


typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef struct paii pii;

pii A[100000];

bool fa(int i, int j)
{
	return
	(ldb)(A[i].first*A[(i+1)%n].first+A[i].second*A[(i+1)%n].second)*(A[i].first*A[(i+1)%n].first+A[i].second*A[(i+1)%n].second)*
	((A[j].first*A[j].first+A[j].second*A[j].second)*(A[(j+1)%n].first*A[(j+1)%n].first+A[(j+1)%n].second*A[(j+1)%n].second))<
	
	((A[i].first*A[i].first+A[i].second*A[i].second)*(A[(i+1)%n].first*A[(i+1)%n].first+A[(i+1)%n].second*A[(i+1)%n].second))*
	
	
	
	(ldb)(A[j].first*A[(j+1)%n].first+A[j].second*A[(j+1)%n].second)*(A[j].first*A[(j+1)%n].first+A[j].second*A[(j+1)%n].second);
}

int ff(pii i)
{
	if(i.second == 0 && i.first > 0)return 0;
	if(i.second > 0 && i.first > 0)return 1;
	if(i.second > 0 && i.first == 0)return 2;
	if(i.second > 0 && i.first < 0)return 3;
	if(i.second == 0 && i.first < 0)return 4;
	if(i.second < 0 && i.first < 0)return 5;
	if(i.second < 0 && i.first == 0)return 6;
	return 7;
}

bool f(pii i, pii j)
{
	int a = ff(i), b = ff(j);
	if(a < b)return true;
	if(b < a)return false;
	return i.first * (j.second+i.second) - (j.first+i.first) * i.second > 0;
}

int main()
{
ios_base::sync_with_stdio(0);
	int ind=0;
	cin>>n;
	for(int i = 0; i < n; ++i){cin>>A[i].first>>A[i].second;A[i].ind = i+1;}
	sort(A+0,A+n,f);
	ldb res = -std::numeric_limits<ldb>::infinity();
	ldb temp;
	for(int i = 0; i < n; ++i)
	{
		if(fa(ind,i)){ind = i; res = temp; }
	}
	cout<<A[ind].ind<<' '<<A[(ind+1)%n].ind;
	return 0;
}
