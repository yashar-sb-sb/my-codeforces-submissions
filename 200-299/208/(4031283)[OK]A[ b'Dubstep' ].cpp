#include<iostream>
#include<string>
using namespace std;
int main()
{
	bool flag=true;
	string s;
	cin>> s;
	int i,l = s.size();
	if(l<4)
	{
		cout<<s;
		return 0;
	}
	i = 0;
	while(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')i+=3;
	while(s[l-3]=='W' && s[l-2]=='U' && s[l-1]=='B')l-=3;
	for(; i < l; ++i)
	{
		if(i<l-3 && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
		{
			if(flag)
			{
				cout<<' ';
			}
			i+=2,flag=false;
		}
		else
		{
			cout<<s[i];
			flag = true;
		}
	}
	return 0;
}