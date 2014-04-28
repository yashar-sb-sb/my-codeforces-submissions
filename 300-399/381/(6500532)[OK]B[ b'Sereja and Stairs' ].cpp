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
int A[100000];
int main()
{
ios_base::sync_with_stdio(0);
	int n,i,j=0;
	vector<int>l,r;
	cin>>n;
	for(i=0; i < n; ++i)
	{
		cin>>A[i];
	}
	sort(A,A+n);
	l.push_back(A[0]);
	for(i=1; i < n; ++i)
	{
		if(A[i-1]==A[i])++j;
		else j=0;
		if(!j)l.push_back(A[i]);
		else if(j == 1)r.push_back(A[i]);
	}
	if(r.size()&&l.size()&&l.back()==r.back())r.pop_back();
	cout<<r.size()+l.size()<<'\n';
	for(vector<int>::iterator a = l.begin(), b = l.end(); a<b; ++a)
	{
		cout<<*a<<' ';
	}
	for(vector<int>::reverse_iterator a = r.rbegin(), b = r.rend(); a<b; ++a)
	{
		cout<<*a<<' ';
	}
	return 0;
}