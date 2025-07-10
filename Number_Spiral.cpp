#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>

using namespace std;
ll x,y;
void input()
{
    cin>>x>>y;
}

void solve()
{
    ll pos=max(x,y);
    ll r=pos*pos;
    ll l=r-2*(pos-1);
    ll mid=l+(pos-1);
    ll ans=0;
    if(x==pos&&y==pos)
    {
        ans=mid;
    }
    else if(x==pos)
    {
        if(pos&1)
            ans=l+(y-1);
        else ans=r-(y-1);
    }
    else if(y==pos)
    {
        if(pos&1)ans=r-(x-1);
        else ans=l+(x-1);
    }
    cout<<ans<<'\n';
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
    cin>>t;
    while(t--)
    {
        input();
        solve();
    }

    cerr<< "\nTime elapsed: "<< 1.0*clock()/CLOCKS_PER_SEC<<"s";
    return 0;
}
