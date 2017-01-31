#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100];

int main()
{
    ios_base::sync_with_stdio(0);
    cout.setf(ios::fixed);
    cout.precision(20);
    int n, b;
    cin>>n>>b;
    int ma = 0;
    for(int i = 0; i < n; ++i)
    {
    	cin>>A[i];
    	ma = max(ma,A[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
    	sum += ma-A[i];
    }
    if(sum>b)return cout<<-1,0;
    b-=sum;
    for(int i = 0; i < n; ++i)
    {
    	cout<<ma-A[i] + ldb(b)/ldb(n)<<'\n';
    }
	return 0;
}
