#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int main()
{
    ios_base::sync_with_stdio(0);
    int a, b;
    cin>>a>>b;
    if((a+b)&&(a-b)*(a-b)<2)cout<<"YES";
    else cout<<"NO";
	return 0;
}