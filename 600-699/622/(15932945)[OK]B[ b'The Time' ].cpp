#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int h, m, n;
	string s;
	cin>>s;
	cin>>n;
	h = (s[0]-'0')*10 + s[1]-'0';
	m = (s[3]-'0')*10 + s[4]-'0';
	int mm = h*60+m;
	mm += n;
	mm %= 24 * 60;
	h = mm/60;
	m = mm%60;
	
	cout<<h/10<<h%10<<':'<<m/10<<m%10;
	return 0;
}
