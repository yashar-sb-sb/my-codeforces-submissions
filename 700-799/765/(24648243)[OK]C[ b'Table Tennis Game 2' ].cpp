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
    int k,a,b;
    cin>>k>>a>>b;
    if(a<b)swap(a,b);
    if(a%k != 0 && b<k)
    	return cout<<-1,0;
    cout<<a/k+b/k;
   	return 0;
}