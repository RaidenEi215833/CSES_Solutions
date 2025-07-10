#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define pll pair<ll,ll>

using namespace std;
ll d[30];
string s;
void input()
{
    cin>>s;
}

void solve()
{
    for(auto x : s)
    {
        d[(int)x-'A']++;
    }
    ll cnt=0,x;
    for(int i=0;i<=25;i++)
        if(d[i]&1)
        {
            x=i;
            cnt++;
        }
    if(cnt>1)
    {
        cout<<"NO SOLUTION";
        return ;
    }
    string s1="";
    for(int i=0;i<=25;i++)
    {
        for(int j=1;j<=d[i]/2;j++)
            s1.push_back(char(i+'A'));
    }
    cout<<s1;
    if(cnt)cout<<char(x+'A');
    reverse(s1.begin(),s1.end());
    cout<<s1;
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

