#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int p[3];

int main()
{
    ios_base::sync_with_stdio(0);
    int n,x;
    cin>>n>>x;
    p[x] = 1;
    n = n%6;
    for(int i = n-1; i >= 0; --i)
    {
    	if(i%2==0)swap(p[0],p[1]);
    	else swap(p[1],p[2]);
    }
    for(int i = 0; i < 3; ++i)
    	if(p[i])
    		cout<<i<<endl;
}