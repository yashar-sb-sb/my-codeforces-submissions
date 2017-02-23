#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int S[100002];

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    ++n;
    for(int i = 2; i <= n; ++i)
    {
    	if(!S[i])S[i] = 1;
    	else continue;
    	if(i < 10000)
    	for(int j = i*i; j <= n; ++j)S[j] = 2;
    }
    if(n<4)cout<<"1\n";
    else cout<<"2\n";
    for(int i = 2; i <= n; ++i)
    	cout<<S[i]<<' ';
   	return 0;
}