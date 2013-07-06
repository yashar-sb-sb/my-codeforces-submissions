#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int n,nn,s=0,ms=-3001;
    cin>>n;
    vector<int> v(n);//6 -> 1 -2 3 -4 5 -6
	for(int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
    int l = n/3;
    for (int i = 1; i <= l; i++)
    {
        s=0;
        for (int ii = 0; ii < n; ii+=i)
        {
            s+=v[ii];
        }
        if (s>ms)
        {
            ms = s;
        }
    }
    cout<<ms;
	cin.get();
	cin.get();
}