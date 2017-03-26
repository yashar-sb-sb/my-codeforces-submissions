#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<string,int> ma;

int main()
{
    ios_base::sync_with_stdio(0);
    ma["Tetrahedron"] = 4;
    ma["Cube"] = 6;
    ma["Octahedron"] = 8;
    ma["Dodecahedron"] = 12;
    ma["Icosahedron"] = 20;
    int n;
    cin>>n;
    n = 0;
    string s;
    while (cin>>s) {
        n += ma[s];
    }
    cout<<n<<endl;
    return 0;
}
