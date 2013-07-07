#include<iostream>
using namespace std;
int main()
{
	int t,a;
	cin>>t;
	while(t--)
	{
		cin>>a;
		cout<< (180%(180-a) && 180/(180-a) > 2 ? "NO" : "YES")<<endl;
	}
	return 0;
}