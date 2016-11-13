#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;


int main()
{
ios_base::sync_with_stdio(0);
	LL sum = 0, cur = 0, dot = 0;
	char c;
	while(cin>>c)
	{
		if(c=='.'){dot = 0; continue;}
		if(c<'A'){++dot; cur = cur*10+c-'0';continue;}
		if(dot == 2)sum += cur;
		else sum += cur*100;
		dot = 0;
		cur = 0;
	}
	if(dot == 2)sum += cur;
	else sum += cur*100, cur = 0;
	
	string res = "";
	dot = 1;
	if(sum<100)
	{
		cout<<"0."<<sum/10<<sum%10<<endl;
		return 0;
	}
	while(sum)
	{
		if(dot == 3) dot = 0, res.push_back('.');
		res.push_back('0' + (sum%10));
		sum /= 10;
		++dot;
	}
	reverse(res.begin(),res.end());
	if(res[res.size()-1] == '0' && res[res.size()-2] == '0')
	{
		res.pop_back();
		res.pop_back();
		res.pop_back();
	}
	cout<<res<<endl;
	return 0;
}