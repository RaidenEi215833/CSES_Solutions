#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>

using namespace std;
ll n;
void input()
{
    cin>>n;
}

vector<string>v;
void solve()
{
    v.push_back("0");
    v.push_back("1");
    for(int i=2;i<=n;i++)
    {
        vector<string>v1;
        int m=v.size();
        for(int i=m-1;i>=0;i--)
        {
            string t="1";
            for(auto x : v[i])
            {
                t.push_back(x);
            }
            v.push_back(t);
        }
        for(int i=0;i<m;i++)
        {
            v[i].insert(0,"0");
        }
    }
    for(auto x : v)cout<<x<<'\n';
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    #define orz "mo"
    if(fopen(orz".inp","r"))
    {
        freopen(orz".inp","r",stdin);
        freopen(orz".out","w",stdout);
    }

    int t=1;
    //cin>>t;
    while(t--)
    {
        input();
        solve();
    }

    cerr<< "\nTime elapsed: "<< 1.0*clock()/CLOCKS_PER_SEC<<"s";
    return 0;
}

