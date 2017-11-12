#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string S[100000];


int parr[256];

int root(int v){return parr[v] < 0 ? v : (parr[v] = root(parr[v]));}
void merge(int x,int y){
    if((x = root(x)) == (y = root(y)))return;
    if(parr[y] < parr[x])
        swap(x, y);
    parr[x] += parr[y];
    parr[y] = x;
}

vector<int> for_chars[256];
vector<string> ans;

string f(char cha)
{
    vector<int> places(256);
    places[cha] = 100;
    set<int> se;
    do
    {
        int v = 0;
        for(int i = 'a'; i <= 'z'; ++i)
        {
            if(!se.count(i) && places[i])
            {
                v = i;
                break;
            }
        }
        if(!v)
            break;
        se.insert(v);
        for(int i:for_chars[v])
        {
            string &s = S[i];
            int start = 0;
            while(s[start]!=char(v))
                ++start;
            for(int j = 0; j < int(s.size()); ++j)
                if(places[s[j]] == 0 || places[v]-start+j==places[s[j]])
                    places[s[j]] = places[v]-start+j;
                else
                {
                    cout<<"NO\n";
                    exit(0);
                }
        }
    }
    while(1);
    int mi = 1e9;
    for(int i:places)
        if(i)
            mi = min(mi, i);
    string res = "      ";
    res = res+res;
    res = res+res;
    res = res+res;
    for(int i = 'a'; i <= 'z'; ++i)
        if(places[i])
            res[places[i]-mi] = char(i);
    while(res.back() == ' ')
        res.pop_back();
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    memset(parr, -1, sizeof(parr));
    for(int i = 0; i < n; ++i)
    {
        cin>>S[i];
        map<char, int> ma;
        for(char c:S[i])
        {
            if(ma[c]++)
                return cout<<"NO\n", 0;
            for_chars[int(c)].push_back(i);
        }
        for(int j = 1; j < int(S[i].size()); ++j)
            merge(S[i][j-1], S[i][j]);
    }
    set<int> se;
    for(int i = 'a'; i <= 'z'; ++i)
        if(!se.count(root(i)) && for_chars[i].size())
        {
            se.insert(root(i));
            ans.push_back(f(i));
        }
    sort(ans.begin(), ans.end(), [](string &str1, string &str2)
            {
                return str1+str2 < str2+str1;
            });
    for(string &s :ans)
        cout<<s;
    cout<<'\n';
    return 0;
}
