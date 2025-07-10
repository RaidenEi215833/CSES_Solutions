#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>

using namespace std;
string s;
ll n;
ll x[10];
bool kt[10];
set<string>st;
void Try(int k)
{
    if(k>n)
    {
        string t="";
        for(int i=1;i<=n;i++)
            t.push_back(s[x[i]]);
        st.insert(t);
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(!kt[i])
        {
            kt[i]=1;
            x[k]=i;
            Try(k+1);
            kt[i]=0;
        }
    }
}

void input()
{
    cin>>s;
    n=s.size();
    s=' '+s;
}

void solve()
{
    Try(1);
    cout<<st.size()<<'\n';
    for(auto x : st)
        cout<<x<<'\n';
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

