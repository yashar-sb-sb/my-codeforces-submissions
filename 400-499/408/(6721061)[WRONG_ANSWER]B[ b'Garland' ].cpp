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

int A[26],B[26];

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	for(string::iterator i = s.begin(); i != s.end(); ++i)++A[*i-'a'];
	cin>>s;
	for(string::iterator i = s.begin(); i != s.end(); ++i)++B[*i-'a'];
	int sum = 0;
	for(int i = 0; i < 26; ++i)sum += min(A[i],B[i]);
	cout<<(sum?sum:-1);
	return 0;
}