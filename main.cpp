#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>
const ll M=1e9+9;
using namespace std;
ll m,a[355];
void input()
{
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>a[i];
}
bool kt[25];
ll ans=0;
void Try(int k)
{
    if(k>m)
    {
        vector<ll>v;
        for(int i=1;i<=m;i++)
        {
            if(kt[i])v.push_back(a[i]);
        }
        if(v.size()%2!=0||v.size()<4)return ;
        vector<ll>dif;
        for(int i=0;i<v.size()/2;i++)
        {
            dif.push_back(v[i]+v[v.size()-i-1]);
        }
        for(int i=1;i<dif.size();i++)
        {
            if(dif[i]>=dif[i-1])return ;
        }
        ans++;
        return ;
    }
    for(int v=0;v<=1;v++)
    {
        kt[k]=v;
        Try(k+1);
    }
}
void sub1()
{
    ans=0;
    Try(1);
    cout<<ans;
}
ll dp[105][105],pre[105][105];
void sub2()
{
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            dp[i][j]=0;
        }
    }
    ll ans=0;
    for(int len=4;len<=m;len+=2)
    {
        for(int i=1;i<=m-len+1;i++)
        {
            int j=i+len-1;
            bool kt=1;
            for(int k=0;k<len/2-1;k++)
            {
                ll s1=a[k+i]+a[j-k];
                ll s2=a[k+i+1]+a[j-k-1];
                if(s1<=s2)
                {
                    kt=0;
                    break;
                }
            }
            if(kt)ans=(ans+1)%M;
        }
    }
    cout<<ans;
    //cout<<' '<<dp[2][5]<<' '<<dp[2][6];
}

void solve()
{

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
//        if(m<=20)
//        {
//            sub1();
//            return 0;
//        }
        sub1();
        cout<<'\n';
        sub2();
        solve();
    }

    cerr<< "\nTime elapsed: "<< 1.0*clock()/CLOCKS_PER_SEC<<"s";
    return 0;
}
