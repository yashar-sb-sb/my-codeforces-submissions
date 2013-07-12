#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;
int A[10] = {};
int main()
{
	string t,s;
	cin>>t>>s;
	int c=0,l = s.size();
	for(int i = 0; i < l; ++i)
	{
		if(s[i] == '2' || s[i] == '5')
		{
			++A[2];
		}
		else if(s[i] == '6' || s[i] == '9')
		{
			++A[6];
		}
		else
		{
			++A[s[i]-'0'];
		}
	}
	bool flag = true;
	l = t.size();
	do
	{
		for(int i = 0; i < l; ++i)
		{
			if(t[i] == '2' || t[i] == '5')
			{
				if(--A[2]<0)
				{
					flag = false;
				}
			}
			else if(t[i] == '6' || t[i] == '9')
			{
				if(--A[6]<0)
				{
					flag = false;
				}
			}
			else
			{
				if(--A[t[i]-'0']<0)
				{
					flag = false;
				}
			}
		}
	}while(flag&&++c);
	cout<<c;
	return 0;
}