#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

pii A[500000];
char B[500000];

#define dis(a,b) (abs(a.first-b.first)+abs(a.second-b.second))

int main()
{
ios_base::sync_with_stdio(0);
	LL n;
	cin>>n;
	pii K;
	cin>>K.first>>K.second;
	for(int i = 0; i < n; ++i)
	{
		cin>>B[i]>>A[i].first>>A[i].second;
	}
	LL mi = 1000000000;
	mi *= mi;
	char res = 'A';
	
	for(int i = 0; i < n; ++i)
	{
		if(A[i].first == K.first && A[i].second > K.second)
		{
			int tmp = dis(K,A[i]);
			if(tmp<mi)
			{
				res = B[i];
				mi = tmp;
			}
		}
	}
	if(res == 'Q' || res == 'R')return cout<<"YES",0;
	
	
	mi = 1000000000;
	mi *= mi;
	res = 'A';
	
	for(int i = 0; i < n; ++i)
	{
		if(A[i].first == K.first && A[i].second < K.second)
		{
			int tmp = dis(K,A[i]);
			if(tmp<mi)
			{
				res = B[i];
				mi = tmp;
			}
		}
	}
	if(res == 'Q' || res == 'R')return cout<<"YES",0;
	
	
	mi = 1000000000;
	mi *= mi;
	res = 'A';
	
	for(int i = 0; i < n; ++i)
	{
		if(A[i].first < K.first && A[i].second == K.second)
		{
			int tmp = dis(K,A[i]);
			if(tmp<mi)
			{
				res = B[i];
				mi = tmp;
			}
		}
	}
	if(res == 'Q' || res == 'R')return cout<<"YES",0;
	
	
	mi = 1000000000;
	mi *= mi;
	res = 'A';
	
	for(int i = 0; i < n; ++i)
	{
		if(A[i].first > K.first && A[i].second == K.second)
		{
			int tmp = dis(K,A[i]);
			if(tmp<mi)
			{
				res = B[i];
				mi = tmp;
			}
		}
	}
	if(res == 'Q' || res == 'R')return cout<<"YES",0;
	
	//di
	
	
	mi = 1000000000;
	mi *= mi;
	res = 'A';
	
	for(int i = 0; i < n; ++i)
	{
		if(A[i].first - K.first == A[i].second - K.second && A[i].second > K.second)
		{
			int tmp = dis(K,A[i]);
			if(tmp<mi)
			{
				res = B[i];
				mi = tmp;
			}
		}
	}
	if(res == 'Q' || res == 'B')return cout<<"YES",0;
	
	
	mi = 1000000000;
	mi *= mi;
	res = 'A';
	
	for(int i = 0; i < n; ++i)
	{
		if(A[i].first - K.first == A[i].second - K.second && A[i].second < K.second)
		{
			int tmp = dis(K,A[i]);
			if(tmp<mi)
			{
				res = B[i];
				mi = tmp;
			}
		}
	}
	if(res == 'Q' || res == 'B')return cout<<"YES",0;
	
	
	mi = 1000000000;
	mi *= mi;
	res = 'A';
	
	for(int i = 0; i < n; ++i)
	{
		if(A[i].first - K.first == K.second -  A[i].second && A[i].second > K.second)
		{
			int tmp = dis(K,A[i]);
			if(tmp<mi)
			{
				res = B[i];
				mi = tmp;
			}
		}
	}
	if(res == 'Q' || res == 'B')return cout<<"YES",0;
	
	
	mi = 1000000000;
	mi *= mi;
	res = 'A';
	
	for(int i = 0; i < n; ++i)
	{
		if(A[i].first - K.first == K.second -  A[i].second && A[i].second < K.second)
		{
			LL tmp = dis(K,A[i]);
			if(tmp<mi)
			{
				res = B[i];
				mi = tmp;
			}
		}
	}
	if(res == 'Q' || res == 'B')return cout<<"YES",0;
	cout<<"NO";
	return 0;
}