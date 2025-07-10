#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>
const int N=1e6;
using namespace std;
string s;
ll a[N+3];
ll d[30],n;
void input()
{
    cin>>s;
    n=s.size();
    for(auto x : s)
    {
        d[(int)x-'A']++;
    }
}

void solve()
{
    ll pre=26;
    for(int i=1;i<=n;i++)
    {
        ll len=n-i+1;
        ll luu,cnt=0;
        for(int j=0;j<=25;j++)
        {
            if(j==pre)continue;
            if(!d[j])continue;
            ll x=d[j];
            if(x>(len-x)+1)
            {
                cout<<-1;
                return ;
            }
            else if(x==(len-x)+1)
            {
                luu=j;
                cnt++;
            }
        }
        if(cnt>=2)
        {
            cout<<-1;
            return ;
        }
        if(cnt==1)
        {
            a[i]=luu;
            pre=luu;
            d[luu]--;
        }
        else
        {
            for(int j=0;j<=25;j++)
            {
                if(j==pre)continue;
                if(!d[j])continue;
                a[i]=j;
                pre=j;
                d[j]--;
                break;
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<char(a[i]+'A');
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

