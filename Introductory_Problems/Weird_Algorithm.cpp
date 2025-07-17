#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000005];
int p[1000005];
vector<int> f[1000005];
int dp[2][100005];
void dfs(int u,int pr)
{
    dp[0][u] = 0;
    dp[1][u] = a[u];
    for(int v : f[u])
    {
        if(v == pr) continue;
        dfs(v, u);
        dp[0][u] += dp[1][v];
        dp[1][u] += min(dp[0][v], dp[1][v]);
    }
}   
int main() {
    freopen("summax3.inp", "r", stdin);
    freopen("summax3.out", "w", stdout);
    cin>>n;
    int root=0;
    for(int i=1;i<=n;++i)
        cin>>a[i];
    for(int i=1;i<=n;++i)
    {
        cin>>p[i];
        if(p[i]!=0)
        {
            f[p[i]].push_back(i);
            f[i].push_back(p[i]);
        }
        else root=i;
    }
    dfs(root,-1);
    cout<<min(dp[0][root], dp[1][root]);
}