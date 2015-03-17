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
#include<cstdio>
#include<list>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<int,bool> mh,mv;
multimap<int,pair<int,int> > mah,mav;

int main()
{
ios_base::sync_with_stdio(0);
	int w,h,n,i;
	char c;
	cin>>w>>h>>n;
	mh[0] = true;
	mh[h] = true;
	mv[0] = true;
	mv[w] = true;
	mah.insert(make_pair(h,make_pair(0,h)));
	mav.insert(make_pair(w,make_pair(0,w)));
//		cout<<'\n'<<h<<' '<<w<<'\n';
	while(n--)
	{
		cin>>c>>i;
		if(c=='H')
		{
			mah.insert(make_pair(i-(*--mh.lower_bound(i)).first,make_pair((*--mh.lower_bound(i)).first,i)));
			mah.insert(make_pair((*mh.upper_bound(i)).first-i,make_pair(i,(*mh.upper_bound(i)).first)));
			mh[i]=true;
			while(true)
			{//cout<<'c';
				multimap<int,pair<int,int> >::reverse_iterator it = mah.rbegin();
//					cout<<(*it).first<<(*it).second.first<<(*it).second.second<<'\n';
//				for(multimap<int,pair<int,int> >::iterator iit = mah.begin(); iit != mah.end(); ++iit)
//					cout<<(*iit).first<<(*iit).second.first<<(*iit).second.second<<'\n';
				if((*mh.upper_bound((*it).second.first)).first==(*it).second.second)
				{
					h = (*it).first;
					break;
				}
				mah.erase(--(it.base()));
			}
		}
		else
		{
			mav.insert(make_pair(i-(*--mv.lower_bound(i)).first,make_pair((*--mv.lower_bound(i)).first,i)));
			mav.insert(make_pair((*mv.upper_bound(i)).first-i,make_pair(i,(*mv.upper_bound(i)).first)));
			mv[i]=true;
			while(true)
			{
				multimap<int,pair<int,int> >::reverse_iterator it = mav.rbegin();
				if((*mv.upper_bound((*it).second.first)).first==(*it).second.second)
				{
					w = (*it).first;
					break;
				}
				mav.erase(--(it.base()));
			}
		}
		cout<<(LL)h*(LL)w<<'\n';
	}
	return 0;
}
