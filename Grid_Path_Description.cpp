#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>

using namespace std;
string s;
ll dx[]={-1,0,1,0};
ll dy[]={0,1,0,-1};
ll n;
char ch[]={'U','R','D','L'};
void input()
{
    cin>>s;
    n=s.size();
    s=' '+s;
}
bool check(ll x,ll y)
{
    return x>0&&y>0&&x<=7&&y<=7;
}
ll d[10][10],ans=0;
bool kt[10][10];
bool blocked(ll x,ll y)
{
    bool l=(y-1<1)||kt[x][y-1];
    bool r=(y+1>7)||kt[x][y+1];
    bool u=(x-1<1)||kt[x-1][y];
    bool d=(x+1>7)||kt[x+1][y];
    if(l&&r&&!u&&!d||u&&d&&!l&&!r)return 1;
    return 0;

}
void dfs(ll k,pll q)
{
    ll x=q.fi;
    ll y=q.se;
    if(k==n+1)
    {
        if(x==7&&y==1)
        {
            ans++;
        }
        return ;
    }
    if(k<=n&&x==7&&y==1)return ;
    if(blocked(x,y))return ;
    if(s[k]!='?')
    {
        for(int j=0;j<4;j++)
        {
            if(s[k]==ch[j])
            {
                ll nx=x+dx[j];
                ll ny=y+dy[j];
                if(!check(nx,ny)||kt[nx][ny])continue;
                kt[nx][ny]=1;
                dfs(k+1,{nx,ny});
                kt[nx][ny]=0;
            }
        }
    }
    else
    {
        for(int i=0;i<4;i++)
        {
            ll nx=x+dx[i];
            ll ny=y+dy[i];
            if(!check(nx,ny)||kt[nx][ny])continue;
            kt[nx][ny]=1;
            dfs(k+1,{nx,ny});
            kt[nx][ny]=0;
        }
    }
}
void solve()
{
    kt[1][1]=1;
    dfs(1,{1,1});
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


