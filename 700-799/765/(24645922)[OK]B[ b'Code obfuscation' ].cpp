#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool A[256];

int main()
{
    ios_base::sync_with_stdio(0);
    char c;
    while(cin>>c)
    {
    	for(int i = 'a'; i < c; ++i)
    	{
    		if(!A[i])
    			return cout<<"NO",0;
    	}
    	A[c] = true;
    }
    cout<<"YES";
   	return 0;
}