#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool A[100001];

int main()
{
    ios_base::sync_with_stdio(0);
    int n,inp,cur;
    cin>>n;
    cur = n;
    for(int i = 0; i < n; ++i)
    {
    	cin>>inp;
    	A[inp] = true;
    	while(A[cur])cout<<cur--<<' ';cout<<'\n';
    }
   	return 0;
}