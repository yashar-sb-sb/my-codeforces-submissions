#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int S[100000];
int par[100000];

int root(int v){return par[v] < 0 ? v : (par[v] = root(par[v]));}
void merge(int x,int y){
        if((x = root(x)) == (y = root(y)))return;
	if(par[y] < par[x])
		swap(x, y);
	par[x] += par[y];
	par[y] = x;
	S[x] = max(S[y],S[x]);
}


int main()
{
    ios_base::sync_with_stdio(0);
    memset(par,-1,sizeof(par));
    memset(S,-1,sizeof(S));
    int n, m ,q;
    cin>>n>>m>>q;
    map<string,int> id;
    string s, x, y;
    for(int i = 0; i < n; ++i)
    {
    	cin>>s;
    	id[s] = i;
    }
    int t, X, Y;
    for(int i = 0; i < m; ++i)
    {
    	cin>>t>>x>>y;
    	X = root(id[x]);
    	Y = root(id[y]);
    	//cerr<<X<<' '<<Y<<' '<<S[X]<<' '<<S[Y]<<endl;
    	if(t==1)
    	{
    		if(S[X] != Y && S[Y] != X && (min(S[X],S[Y])==-1 || S[X] == S[Y]))
    		{
    			merge(X,Y);
    			if(S[X] == -1)S[X] = S[Y];
    			if(S[Y] == -1)S[Y] = S[X];
    			if(S[X]!=-1)merge(S[X],S[Y]);
    			cout<<"YES\n";
    		}
    		else
    		{
    			cout<<"NO\n";
    		}
    	}
    	else
    	{
    		if((S[Y] == X || S[X] == Y)||(X != Y && (min(S[X],S[Y])==-1 || S[X]!=S[Y])))
    		{
    			if(S[Y]!=-1)merge(X,S[Y]);
    			if(S[X]!=-1)merge(S[X],Y);
    			S[root(X)] = root(Y);
    			S[root(Y)] = root(X);
    			cout<<"YES\n";
    		}
    		else
    		{
    			cout<<"NO\n";
    		}
    	}
    	X = root(id[x]);
    	Y = root(id[y]);
    	//cerr<<X<<' '<<Y<<endl<<endl;
    }
    for(int i = 0; i < q; ++i)
    {
    	cin>>x>>y;
    	X = root(id[x]);
    	Y = root(id[y]);
    	if(X==Y)cout<<1;
    	else if(S[X] == Y || S[Y] == X)cout<<2;
    	else cout<<3;
    	cout<<'\n';
    }
	return 0;
}