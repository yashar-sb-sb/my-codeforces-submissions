#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int T[100],P[100],G[100],mt,mp,mg;
string N[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		int s;
		cin>>s>>N[i];
		string num;
		while(s--)
		{
			cin>>num;
			if(num[0] == num[1] && num[1] == num[3] && num[3] == num[4] && num[4] == num[6] && num[6] == num[7])++T[i];
			else if(num[0] > num[1] && num[1] > num[3] && num[3] > num[4] && num[4] > num[6] && num[6] > num[7])++P[i];
			else ++G[i];
		}
		mt = max(mt,T[i]);
		mp = max(mp,P[i]);
		mg = max(mg,G[i]);
	}
	cout<<"If you want to call a taxi, you should call: ";
	string stmp = "";
	for(int i = 0; i < n; ++i)
	{
		if(T[i] == mt)
		{
			cout<<stmp<<N[i];
			stmp = ", ";
		}
	}
	cout<<".\nIf you want to order a pizza, you should call: ";
	stmp="";
	for(int i = 0; i < n; ++i)
	{
		if(P[i] == mp)
		{
			cout<<stmp<<N[i];
			stmp = ", ";
		}
	}
	cout<<".\nIf you want to go to a cafe with a wonderful girl, you should call: ";
	stmp = "";
	for(int i = 0; i < n; ++i)
	{
		if(G[i] == mg)
		{
			cout<<stmp<<N[i];
			stmp = ", ";
		}
	}
	cout<<".\n";
	return 0;
}
