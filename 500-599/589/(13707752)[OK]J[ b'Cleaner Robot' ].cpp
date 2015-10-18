
#include <bits/stdc++.h>
#include <stdio.h>
#define lli long long int
#define pii pair<int,int>
#define plli pair<lli,lli>
#define X first
#define Y second
using namespace std;
int xs,ys;
bool M[12][12][4] = {};
int arr[12][12];
int ran[12][12];

int wh(char x)
{
	return x=='U' ? 0 : x=='R' ? 1 : x=='D' ? 2 : 3;
}

char change (char x)
{
	if(x=='U')x='R';
	else if(x=='R')x='D';
	else if(x=='D')x='L';
	else if(x=='L')x='U';
	return x;
}

int X(char f,int x)
{
	if(f=='R')return x+1;
	else if(f=='L')return x-1;
	return x;
}
int Y(char f,int y)
{
	if(f=='D')return y+1;
	else if(f=='U')return y-1;
	return y;
}
int javab=0;
void dfs(int i,int j,char jahat)
{
	// cout<<i<<" "<<j<<" , "<<jahat<<"      ";
	if(ran[i][j]==0){javab++,ran[i][j]=1;}

	int w = wh(jahat);
	if (M[i][j][w] == true)
	{
		return ;
	}

	M[i][j][w] = true;

	int ii , jj;
	ii = Y(jahat  , i);
	jj = X(jahat , j);
	// cout<<ii<<" "<<jj<<" , "<<jahat<<"\n";
	if (arr[ii][jj] == '*')
	{	
		jahat = change(jahat);
		dfs(i , j , jahat);
	}
	else
	{
		dfs(ii , jj, jahat);
	}
}
int main()
{
	int n,m;cin>>n>>m;
	string s;
	for(int i=1;i<=n;i++)
	{
		cin>>s; s=" "+s;
		for(int j=1;j<=m;j++)
		{
			arr[i][j] = s[j];
			if(arr[i][j]!='.' && arr[i][j]!='*')xs=i,ys=j;
		}
	}
	for(int i=0;i<=m+1;i++)
	{
		arr[n+1][i]=arr[0][i]='*';
	}
	for(int i=0;i<=n+1;i++)
	{
		arr[i][m+1]=arr[i][0]='*';
	}
	dfs(xs,ys,arr[xs][ys]);
	cout<<javab;
    return 0;
}