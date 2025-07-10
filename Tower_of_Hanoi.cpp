#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>

using namespace std;
int n;
void input()
{
    cin>>n;
}
vector<pll>v;
void xuli(ll i,ll a,ll b,ll c)
{
    if(i==1)
    {
        v.push_back({a,c});
        return ;
    }
    if(i==2)
    {
        v.push_back({a,b});
        v.push_back({a,c});
        v.push_back({b,c});
        return ;
    }
    xuli(i-1,a,c,b);
    v.push_back({a,c});
    xuli(i-1,b,a,c);
}


void solve()
{
    xuli(n,1,2,3);
    cout<<v.size()<<'\n';
    for(auto x : v)
        cout<<x.fi<<' '<<x.se<<'\n';
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

