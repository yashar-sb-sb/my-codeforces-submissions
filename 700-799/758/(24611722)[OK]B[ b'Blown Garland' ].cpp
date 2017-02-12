#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[256],C[256];

int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    int n;
    cin>>s;
    n = s.size();
    for(int i = 0; i < n; ++i)
    {
    	A[s[i]] = i%4;
    	++C[s[i]];
    }
    cout<<(n+3-A['R'])/4-C['R']<<' '<<(n+3-A['B'])/4-C['B']<<' '<<(n+3-A['Y'])/4-C['Y']<<' '<<(n+3-A['G'])/4-C['G']<<endl;
	return 0;
}