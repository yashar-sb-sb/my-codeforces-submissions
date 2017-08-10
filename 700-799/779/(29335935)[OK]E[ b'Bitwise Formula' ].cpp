#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n, m;
vector<string> A[5000];

int calc(int a, string op, int b)
{
    if(op == "AND")
        return a&b;
    if(op == "OR")
        return a|b;
    return a^b;
}

int f(int bit, int ind)
{
    unordered_map<string, int> res;
    res.max_load_factor(.5);
    res["?"] = bit;
    for(int i = 0; i < n; ++i)
    {
        if(A[i].size() == 3)
            res[A[i][0]] = A[i][2][ind] - '0';
        else
            res[A[i][0]] = calc(res[A[i][2]], A[i][3], res[A[i][4]]);
    }
    int sum = - res["?"];
    for(auto i: res)
        sum += i.second;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
        cin.ignore();
    for(int i = 0; i < n; ++i)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        while(ss>>s)
            A[i].push_back(s);
    }
    string mi = "";
    string ma = "";
    for(int i = 0; i < m; ++i)
    {
        int zero = f(0, i);
        int one = f(1, i);
        if(zero<one)
        {
            mi.push_back('0');
            ma.push_back('1');
        }
        else if(zero>one)
        {
            mi.push_back('1');
            ma.push_back('0');
        }
        else
        {
            mi.push_back('0');
            ma.push_back('0');
        }
    }
    cout<<mi<<endl<<ma<<endl;
    return 0;
}
