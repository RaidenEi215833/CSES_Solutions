#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>

using namespace std;
string a[10];
bool h[10],c[10],kt1[20],kt2[20];
void input()
{
    for(int i=1;i<=8;i++)
    {
        cin>>a[i];
        a[i]=' '+a[i];
    }
}
ll ans=0;
void Try(int k)
{
    if(k>8)
    {
        ans++;
        return ;
    }
    for(int j=1;j<=8;j++)
    {
        if(a[k][j]=='*')continue;
        if(c[j])continue;
        if(kt1[k-j+8]||kt2[k+j])continue;
        c[j]=kt1[k-j+8]=kt2[k+j]=1;
        Try(k+1);
        c[j]=kt1[k-j+8]=kt2[k+j]=0;
    }
}

void solve()
{
    Try(1);
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

