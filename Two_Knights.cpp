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
    for(ll i=1;i<=n;i++)
    {
        cout<<(i*i*(i*i-1))/2-4*((i-1)*(i-2))<<'\n';
    }
    /* EXPLAIN THE ABOVE FORMULA (gthich_cong_thuc_tren) */

    /* I
        - (i*i*(i*i-1))/2 This is the number of ways
    two knights can be placed on a k*k chessboard
    */

    /* II
        - 4*((i-1)*(i-2))
        When considering a 3*2 matrix,
        it is easy to see that there are
        2 ways to place 2 knights that will
        eat each other. Similar to the 2*3 matrix.
        Therefore, the number of ways to arrange
        2 knights to attack each other will be equal
        to 2 * the number of times the 3 * 2 matrix appears
        + 2 * the number of times the 2 * 3 matrix appears.
        Because considering a square chessboard,
        the number of times the 3 * 2 matrix appears
        = the number of times the 2 * 3 matrix appears.
        From there, we can deduce the above formula.
    */
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
