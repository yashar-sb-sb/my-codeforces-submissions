#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    int sum = 0,ma=0,a;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
    	cin>>a;
    	sum += a;
    	ma = max(ma,a);
    }
    cout<<ma*n-sum<<endl;
	return 0;
}