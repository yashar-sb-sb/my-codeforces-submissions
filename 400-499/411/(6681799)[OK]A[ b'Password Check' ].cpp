#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	bool a,b,c;
	a=b=c=false;
	cin>>s;
	int l = s.size();
	if(l<5){cout<<"Too weak"; return 0;}
	while(l--)
	{
		if(islower(s[l]))a=true;
		else if(isupper(s[l]))b=true;
		else if(isdigit(s[l]))c=true;
	}
	if(a&&b&&c)cout<<"Correct";
	else cout<<"Too weak";
	return 0;
}