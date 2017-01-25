#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	ios_base::sync_with_stdio(0);
	int a, b, c, p, count = 0;
	LL cost = 0;
	string s;
	cin>>a>>b>>c;
	multiset<int> usb, ps2;
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>p>>s;
		if(s[0]=='U')usb.insert(p);
		else ps2.insert(p);
	}
	while(a--)
	{
		if(!usb.empty())
		{
			++count;
			cost += *usb.begin();
			usb.erase(usb.begin());
		}
	}
	while(b--)
	{
		if(!ps2.empty())
		{
			++count;
			cost += *ps2.begin();
			ps2.erase(ps2.begin());
		}
	}
	for(auto i:ps2)
	{
		usb.insert(i);
	}
	while(c--)
	{
		if(!usb.empty())
		{
			++count;
			cost += *usb.begin();
			usb.erase(usb.begin());
		}
	}
	cout<<count<<' '<<cost<<endl;
	return 0;
}