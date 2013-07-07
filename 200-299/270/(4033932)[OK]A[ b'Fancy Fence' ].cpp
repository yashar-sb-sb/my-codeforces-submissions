#include<iostream>
using namespace std;
int main()
{
	int t,a;
	cin>>t;
	while(t--)
	{
		cin>>a;
		cout<< (360%(180-a) || 360/(180-a) < 3 ? "NO" : "YES")<<endl;
	}
	return 0;
}