#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>

using namespace std;
ll q;
ll mu(ll a,ll b)
{
    ll s=1;
    for(int i=1;i<=b;i++)
        s*=a;
    return s;
}
ll get_char(ll num,ll b)
{
    vector<ll>v;
    while(num>0)
    {
        v.push_back(num%10);
        num/=10;
    }
    reverse(all(v));
    return v[b];
}
ll get(ll k)
{
    ll pos=0,res=9,now,dif=0;
    for(int i=1;i<18;i++)
    {
        pos+=i*res;
        if(pos>=k)
        {
            now=pos-i*res;
            dif=k-now-1;
            ll a=dif/i;
            ll b=dif%i;
            ll num=mu(10,i-1);
            num+=a;
            return get_char(num,b);
        }
        res=res*10;
    }
}
void input()
{
    cin>>q;
}

void solve()
{
    ll x;
    while(q--)
    {
        cin>>x;
        cout<<get(x)<<'\n';
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

