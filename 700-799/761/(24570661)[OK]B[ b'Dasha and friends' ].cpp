#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[50], B[50];

int main()
{
    ios_base::sync_with_stdio(0);
    int n,l;
    cin>>n>>l;
    for(int i = 0; i < n; ++i)cin>>A[i];
    for(int i = 0; i < n; ++i)cin>>B[i];
    for(int i = 0; i < n; ++i)
    {
    	bool f = true;
    	for(int j = 0; j < n; ++j)
    	{
    		if((l+A[(i+j)%n]-B[j])%l != (l+A[i]-B[0])%l)
    		{
    			f = false;
    			break;
    		}
    	}
    	if(f)return cout<<"YES",0;
    }
    cout<<"NO";
	return 0;
}