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
    char c;
    cin>>n;
    string A,B;
    cin>>A>>B;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int a, b = -1;
    for(a = 0; a < n && b < n; ++a)
    {
    	++b;
    	while(b < n && B[b]<A[a])++b;
    	if(b == n)break;
    }
    cout<<n-a<<endl;
    a = n, b = n-1;
    for( ; b >= 0 && a >= 0; --b)
    {
    	--a;
    	while(a >= 0 && A[a] >= B[b])--a;
    	if( a == -1)break;
    }
    cout<<n-b-1<<endl;
}