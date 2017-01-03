#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	//ios_base::sync_with_stdio(0);
    unsigned long long m,n,a;
    std::cin>>m>>n>>a;
    std::cout<<(unsigned long long)ceil((long double)m/a)*(unsigned long long)ceil((long double)n/a);
	return 0;
}