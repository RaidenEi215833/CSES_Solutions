#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>
ll n;
using namespace std;
ll a[105][105];
void input()
{
    cin>>n;
}
bool kt[10005];
void solve()
{
    for(int i=1;i<=n;i++)
    {
        a[1][i]=i-1;
        a[i][1]=i-1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=n;j++)
        {
            ll mx=0;
            for(int k=1;k<i;k++)
            {
                kt[a[k][j]]=1;
                mx=max(a[k][j],mx);
            }
            for(int k=1;k<j;k++)
            {
                kt[a[i][k]]=1;
                mx=max(a[i][k],mx);
            }

            for(int k=mx+1;k>=0;k--)
            {
                if(!kt[k])
                {
                    a[i][j]=k;
                }
                else kt[k]=0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<(j==n?'\n':' ');
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

