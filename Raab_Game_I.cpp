#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>

using namespace std;
ll n,a,b;
void input()
{
    cin>>n>>a>>b;
}

void solve()
{
    ll res=a+b;
    if(res>n)
    {
        cout<<"NO\n";
        return ;
    }
    if(res>0&&(res==a||res==b))
    {
        cout<<"NO\n";
        return ;
    }
    cout<<"YES\n";
    for(int i=res-a+1;i<=res;i++)
        cout<<i<<' ';
    for(int i=1;i<=res-a;i++)
        cout<<i<<' ';
    for(int i=res+1;i<=n;i++)
        cout<<i<<' ';
    cout<<'\n';
    for(int i=1;i<=a;i++)
        cout<<i<<' ';
    for(int i=a+1;i<=res;i++)
        cout<<i<<' ';
    for(int i=res+1;i<=n;i++)
        cout<<i<<' ';
    cout<<'\n';

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

