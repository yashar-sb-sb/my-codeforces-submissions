#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[max('+','-')+1];

int main()
{
	vector<char> s;
	vector<int> v;
	int n;
	char c;
	s.push_back('+');
	++A['+'];
	while(cin>>c,c!='=')
		if(c!='?'){s.push_back(c);++A[c];}
	cin>>n;
	int ans = A['+'] - A['-'], cur;
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i]=='+')
		{
			--ans;
			cur = min(n,max(n-ans,1));
			ans += cur;
		}
		else
		{
			++ans;
			cur = min(n,max(ans-n,1));
			ans -= cur;
		}
		v.push_back(cur);
	}
	if(ans!=n)return cout<<"Impossible\n",0;
	cout<<"Possible\n"<<v[0];
	for(int i = 1; i < s.size(); ++i)cout<<' '<<s[i]<<' '<<v[i];
	cout<<" = "<<n<<endl;
	return 0;
}