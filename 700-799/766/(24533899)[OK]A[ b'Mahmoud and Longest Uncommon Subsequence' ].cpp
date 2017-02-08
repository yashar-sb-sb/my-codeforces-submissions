#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);
    string s,t;
    cin>>s>>t;
    if(s==t)return cout<<-1,0;
    cout<<max(s.size(),t.size());
	return 0;
}