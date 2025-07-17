#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>
const int N=2e5;
using namespace std;
ll n;
bool kt[N+3];
void input()
{
    cin>>n;
    ll x;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        kt[x]=1;
    }
}

void solve()
{
    for(int i=1;i<=n;i++)
    {
        if(!kt[i])
        {
            cout<<i;
            return ;
        }
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
    //cin>>t;
    while(t--)
    {
        input();
        solve();
    }

    cerr<< "\nTime elapsed: "<< 1.0*clock()/CLOCKS_PER_SEC<<"s";
    return 0;
}
