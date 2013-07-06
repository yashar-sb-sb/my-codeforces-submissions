#include<iostream>
using namespace std;
int main()
{
	int n,*A,s,t,su=0;
	cin>>n;
	A = new int[n];
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
		su+=A[i];
	}
	cin>>s>>t;
	if(s>t)
	{
		swap(s,t);
	}
	--s, --t;
	for(n=0;s<t;++s)
	{
		n+=A[s];
	}
	cout<<min(n,su-n);
	return 0;
}