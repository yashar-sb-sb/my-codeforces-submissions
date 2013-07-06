#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
	int k,i,s=0;
	cin>>k;
	vector<int>v(12);
	for(i = 0; i < 12; ++i)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end(),greater<int>());
	i = 0;
	while(i<12&&s<k)
	{
		s+=v[i++];
	}
	cout<<(i==12?-1:i);
	return 0;
}