#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>
const int N=2e5;
using namespace std;
ll a[N+3],n;
void input()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
}

void solve()
{
    ll ans=0;
    for(int i=2;i<=n;i++)
    {
        ans+=max(0ll,a[i-1]-a[i]);
        if(a[i]<a[i-1])a[i]=a[i-1];
    }
    cout<<ans;
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
