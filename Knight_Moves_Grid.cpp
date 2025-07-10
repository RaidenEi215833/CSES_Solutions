#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>
const int N=1e3;
const ll INF=1e18;
using namespace std;
ll n;
ll dx[8]={-1,-2,-2,-1,1,2,2,1};
ll dy[8]={-2,-1,1,2,-2,-1,1,2};
bool check(ll x,ll y)
{
    return x>0&&y>0&&x<=n&&y<=n;
}
ll d[N+3][N+3];
void bfs(pll s)
{
    d[s.fi][s.se]=0;
    queue<pll>q;
    q.push(s);
    while(!q.empty())
    {
        ll x=q.front().fi;
        ll y=q.front().se;
        q.pop();
        for(int i=0;i<8;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(!check(nx,ny))continue;
            if(d[nx][ny]>d[x][y]+1)
            {
                d[nx][ny]=d[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
}
void input()
{
    cin>>n;
}

void solve()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            d[i][j]=INF;
        }
    }
    bfs({1,1});
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<d[i][j]<<(j==n?'\n':' ');
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

