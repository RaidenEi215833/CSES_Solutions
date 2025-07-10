#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>
const int N=5e2;
using namespace std;
ll n,m;
string s[N+3];
bool kt[N+3][N+3][5];
void input()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        s[i]=' '+s[i];
        for(int j=1;j<=m;j++)
        {
            s[i][j]-='A';
            for(int v=0;v<=3;v++)
            {
                kt[i][j][v]=1;
            }
            int x=(int)s[i][j];
            kt[i][j][x]=0;
        }
    }
}

void solve()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i>1)kt[i][j][(int)s[i-1][j]]=0;
            if(j>1)kt[i][j][(int)s[i][j-1]]=0;
            bool ck=1;
            for(int x=0;x<=3;x++)
            {
                if(kt[i][j][x])
                {
                    ck=0;
                    s[i][j]=x;
                    break;
                }
            }
            if(ck)
            {
                cout<<"IMPOSSIBLE";
                return ;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<char(s[i][j]+'A');
        }
        cout<<'\n';
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

