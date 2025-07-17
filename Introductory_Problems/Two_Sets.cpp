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

void solve()
{
    ll s=n*(n+1)/2;
    vector<ll>v1,v2;
    if(s&1)
    {
        cout<<"NO";
        return ;
    }
    else
    {
        cout<<"YES\n";
        s/=2;
        for(int i=n;i>=1;i--)
        {
            if(s>=i)
            {
                s-=i;
                v1.push_back(i);
            }
            else v2.push_back(i);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    cout<<v1.size()<<'\n';
    for(auto x : v1)cout<<x<<' ';
    cout<<'\n';
    cout<<v2.size()<<'\n';
    for(auto x : v2)cout<<x<<' ';
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
