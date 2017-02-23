#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;



int main()
{
    ios_base::sync_with_stdio(0);
    set<string> se;
    string s,t;
    cin>>s>>t;
    se.insert(s);
    se.insert(t);
    int n;
    cin>>n;
    while(cin>>s>>t)
    {
    	for(auto i:se)
    		cout<<i<<' ';cout<<'\n';
    	se.erase(s);
    	se.insert(t);
    }
    	for(auto i:se)
    		cout<<i<<' ';cout<<'\n';
   	return 0;
}