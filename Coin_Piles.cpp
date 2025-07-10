#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>

using namespace std;
ll a,b;
void input()
{
    cin>>a>>b;
}

void solve()
{
    ll res=a+b;
    if(res%3!=0)
    {
        cout<<"NO\n";
        return ;
    }
    else
    {
        res/=3;
        ll pos=a-b;
        ll x=res+pos;
        ll y=res-pos;
        if(x<0||y<0||x%2!=0||y%2!=0)
        {
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
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

